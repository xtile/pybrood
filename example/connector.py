from time import sleep
import pybrood


client = pybrood.client_instance
game = pybrood.game


print(game)


def reconnect():
    while not client.connect():
        sleep(1)


def connection_checker():
    client.update()
    if not client.isConnected():
        print('Reconnecting...')
        reconnect()


def debug_code():
    force = game.getForce(0)
    print(force)
    print(force.getID())
    print(force.getName())
    bullets = game.getBullets()
    print(bullets)
    print(type(bullets))
    print(dir(bullets))
    # pybrood.Force()
    # fs = pybrood.game.get_forces()
    # print(fs)
    # print(type(fs))
    # print(list(fs))
    # for f in fs:
    #     print(f)
    #     print(f.id)
    #     print(f.name)


def main():
    print(game)
    print('Connecting...')
    print(game)
    reconnect()
    print(game)
    while True:
        print(game)
        print('Waiting to enter match...')
        while not game.isInGame():
            connection_checker()
        print('Starting match!')

        debug_code()

        while game.isInGame():
            # ...
            connection_checker()
        print('Game ended')


if __name__ == '__main__':
    main()
