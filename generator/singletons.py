from sys import stderr
from .cdeclparser import lines_to_statements, parse_func
from .cdumper import transform_case
from .typereplacer import replace_all_args, replace_return
from .config import BWAPI_INCLUDE_DIR, GEN_OUTPUT_DIR
from os.path import join


def fmt_func(f, obj, pb_module_name):
    a_lines, a_exprs, a_codes, a_sigs, _, __ = replace_all_args(f, line_prepend_ns=True)
    assert all(x is None for x in a_codes), 'Argument preparation code is not supported'
    r_type, r_expr, _ = replace_return(f, prepend_ns=True)
    inner = '{obj}{f_name}({a_exprs})'.format(
        obj=obj, f_name=f['name'],
        a_exprs=', '.join(a_exprs)
    )
    return '''{pb_module_name}.def("{t}", []({a_sigs}){r_type}{{
    {r_expr}
}});
'''.format(
        pb_module_name=pb_module_name,
        t=transform_case(f['name']),
        a_sigs=', '.join(a_lines),
        r_type='' if r_type == 'void' else ' -> {} '.format(r_type),
        r_expr=r_expr.format(inner)
    )


def file_parser(f, out_file):
    pb_module_name = 'm_' + f.module

    out_file.write('''py::module {pb_module_name} = m.def_submodule("{f_module}");
'''.format(pb_module_name=pb_module_name, f_module=f.module))
    for func in lines_to_statements(f.lines()):
        fnc = parse_func(func)
        try:
            output = fmt_func(fnc, f.obj, pb_module_name)
        except AssertionError as e:
            print(e, file=stderr)
        else:
            out_file.write(output)


class BaseFile:
    obj = NotImplemented
    module = NotImplemented

    @staticmethod
    def lines():
        raise NotImplementedError


class GameFile(BaseFile):
    obj = 'BWAPI::Broodwar->'
    module = 'game'

    @staticmethod
    def lines():
        with open(join(BWAPI_INCLUDE_DIR, 'Game.h')) as f:
            for i, line in enumerate(f, start=1):
                if 55 <= i <= 1705:
                    yield line


class ClientFile(BaseFile):
    obj = 'BWAPI::BWAPIClient.'
    module = 'client'

    @staticmethod
    def lines():
        with open(join(BWAPI_INCLUDE_DIR, 'Client', 'Client.h')) as f:
            for i, line in enumerate(f, start=1):
                if 20 <= i <= 23:
                    yield line


def main():
    with open(join(GEN_OUTPUT_DIR, 'pybind', 'game.cpp'), 'w') as f:
        file_parser(GameFile, f)
    with open(join(GEN_OUTPUT_DIR, 'pybind', 'client.cpp'), 'w') as f:
        file_parser(ClientFile, f)
