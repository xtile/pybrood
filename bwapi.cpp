#include <pybind11/pybind11.h>
#include <BWAPI.h>
#include <BWAPI/Client.h>


namespace PyBinding {
    namespace Client {
        bool isConnected(){
            return BWAPI::BWAPIClient.isConnected();
        }
        bool connect(){
            return BWAPI::BWAPIClient.connect();
        }
        void disconnect(){
            BWAPI::BWAPIClient.disconnect();
        }
        void update(){
            BWAPI::BWAPIClient.update();
        }
    }

    namespace Game {
// virtual Playerset & 	allies ()=0
// virtual bool 	canBuildHere (TilePosition position, UnitType type, Unit builder=nullptr, bool checkExplored=false)=0
// virtual bool 	canMake (UnitType type, Unit builder=nullptr) const =0
// virtual bool 	canResearch (TechType type, Unit unit=nullptr, bool checkCanIssueCommandType=true)=0
// virtual bool 	canUpgrade (UpgradeType type, Unit unit=nullptr, bool checkCanIssueCommandType=true)=0
        int countdownTimer(){
            return BWAPI::Broodwar->countdownTimer();
        }
        int elapsedTime(){
            return BWAPI::Broodwar->elapsedTime();
        }
        void enableFlag(int flag){
            BWAPI::Broodwar->enableFlag(flag);
        }
// virtual Playerset & 	enemies ()=0
// virtual Player 	enemy () const =0
// virtual const Regionset & 	getAllRegions () const =0
// virtual const Unitset & 	getAllUnits () const =0
// virtual int 	getAPM (bool includeSelects=false) const =0
        double getAverageFPS(){
            return BWAPI::Broodwar->getAverageFPS();
        }
// virtual Unit 	getBestUnit (const BestUnitFilter &best, const UnitFilter &pred, Position center=Positions::Origin, int radius=999999) const =0
// TilePosition 	getBuildLocation (UnitType type, TilePosition desiredPosition, int maxRange=64, bool creep=false) const
// virtual const Bulletset & 	getBullets () const =0
// Unit 	getClosestUnit (Position center, const UnitFilter &pred=nullptr, int radius=999999) const
// virtual Unit 	getClosestUnitInRectangle (Position center, const UnitFilter &pred=nullptr, int left=0, int top=0, int right=999999, int bottom=999999) const =0
// int 	getDamageFrom (UnitType fromType, UnitType toType, Player fromPlayer=nullptr, Player toPlayer=nullptr) const
// int 	getDamageTo (UnitType toType, UnitType fromType, Player toPlayer=nullptr, Player fromPlayer=nullptr) const
// virtual const std::list< Event > & 	getEvents () const =0
// virtual Force 	getForce (int forceID) const =0
// virtual const Forceset & 	getForces () const =0
        int getFPS(){
            return BWAPI::Broodwar->getFPS();
        }
        int getFrameCount(){
            return BWAPI::Broodwar->getFrameCount();
        }
// virtual GameType 	getGameType () const =0
// virtual const Unitset & 	getGeysers () const =0
// virtual int 	getGroundHeight (int tileX, int tileY) const =0
// int 	getGroundHeight (TilePosition position) const
// virtual int 	getInstanceNumber () const =0
// virtual bool 	getKeyState (Key key) const =0
// virtual Error 	getLastError () const =0
        int getLastEventTime(){
            return BWAPI::Broodwar->getLastEventTime();
        }
        int getLatency(){
            return BWAPI::Broodwar->getLatency();
        }
        int getLatencyFrames(){
            return BWAPI::Broodwar->getLatencyFrames();
        }
        int getLatencyTime(){
            return BWAPI::Broodwar->getLatencyTime();
        }
// virtual const Unitset & 	getMinerals () const =0
// virtual Position 	getMousePosition () const =0
// virtual bool 	getMouseState (MouseButton button) const =0
// virtual const Unitset & 	getNeutralUnits () const =0
// virtual const Position::list & 	getNukeDots () const =0
// virtual Player 	getPlayer (int playerID) const =0
// virtual const Playerset & 	getPlayers () const =0
// virtual Region 	getRegion (int regionID) const =0
// virtual BWAPI::Region 	getRegionAt (int x, int y) const =0
// BWAPI::Region 	getRegionAt (BWAPI::Position position) const
        int getRemainingLatencyFrames(){
            return BWAPI::Broodwar->getRemainingLatencyFrames();
        }
        int getRemainingLatencyTime(){
            return BWAPI::Broodwar->getRemainingLatencyTime();
        }
        int getReplayFrameCount(){
            return BWAPI::Broodwar->getReplayFrameCount();
        }
        int getRevision(){
            return BWAPI::Broodwar->getRevision();
        }
// virtual BWAPI::Position 	getScreenPosition () const =0
// virtual const Unitset & 	getSelectedUnits () const =0
// virtual const TilePosition::list & 	getStartLocations () const =0
// virtual const Unitset & 	getStaticGeysers () const =0
// virtual const Unitset & 	getStaticMinerals () const =0
// virtual const Unitset & 	getStaticNeutralUnits () const =0
// virtual Unit 	getUnit (int unitID) const =0
// Unitset 	getUnitsInRadius (int x, int y, int radius, const UnitFilter &pred=nullptr) const
// Unitset 	getUnitsInRadius (BWAPI::Position center, int radius, const UnitFilter &pred=nullptr) const
// virtual Unitset 	getUnitsInRectangle (int left, int top, int right, int bottom, const UnitFilter &pred=nullptr) const =0
// Unitset 	getUnitsInRectangle (BWAPI::Position topLeft, BWAPI::Position bottomRight, const UnitFilter &pred=nullptr) const
// Unitset 	getUnitsOnTile (int tileX, int tileY, const UnitFilter &pred=nullptr) const
// Unitset 	getUnitsOnTile (BWAPI::TilePosition tile, const UnitFilter &pred=nullptr) const
        bool hasCreep(int tileX, int tileY){
            return BWAPI::Broodwar->hasCreep(tileX, tileY);
        }
// bool 	hasCreep (TilePosition position) const
// bool 	hasPath (Position source, Position destination) const
// bool 	hasPower (int tileX, int tileY, UnitType unitType=UnitTypes::None) const
// bool 	hasPower (TilePosition position, UnitType unitType=UnitTypes::None) const
// bool 	hasPower (int tileX, int tileY, int tileWidth, int tileHeight, UnitType unitType=UnitTypes::None) const
// bool 	hasPower (TilePosition position, int tileWidth, int tileHeight, UnitType unitType=UnitTypes::None) const
// virtual bool 	hasPowerPrecise (int x, int y, UnitType unitType=UnitTypes::None) const =0
// bool 	hasPowerPrecise (Position position, UnitType unitType=UnitTypes::None) const
// virtual Unit 	indexToUnit (int unitIndex) const =0
        bool isBattleNet(){
            return BWAPI::Broodwar->isBattleNet();
        }
// virtual bool 	isBuildable (int tileX, int tileY, bool includeBuildings=false) const =0
// bool 	isBuildable (TilePosition position, bool includeBuildings=false) const
        bool isDebug(){
            return BWAPI::Broodwar->isDebug();
        }
        bool isExplored(int tileX, int tileY){
            return BWAPI::Broodwar->isExplored(tileX, tileY);
        }
// bool 	isExplored (TilePosition position) const
        bool isFlagEnabled(int flag){
            return BWAPI::Broodwar->isFlagEnabled(flag);
        }
        bool isGUIEnabled(){
            return BWAPI::Broodwar->isGUIEnabled();
        }
        bool isInGame(){
            return BWAPI::Broodwar->isInGame();
        }
        bool isLatComEnabled(){
            return BWAPI::Broodwar->isLatComEnabled();
        }
        bool isMultiplayer(){
            return BWAPI::Broodwar->isMultiplayer();
        }
        bool isPaused(){
            return BWAPI::Broodwar->isPaused();
        }
        bool isReplay(){
            return BWAPI::Broodwar->isReplay();
        }
// virtual bool 	issueCommand (const Unitset &units, UnitCommand command)=0
        bool isVisible(int tileX, int tileY){
            return BWAPI::Broodwar->isVisible(tileX, tileY);
        }
// bool 	isVisible (TilePosition position) const
        bool isWalkable(int walkX, int walkY){
            return BWAPI::Broodwar->isWalkable(walkX, walkY);
        }
// bool 	isWalkable (BWAPI::WalkPosition position) const
        void leaveGame(){
            BWAPI::Broodwar->leaveGame();
        }
        std::string mapFileName(){
            return BWAPI::Broodwar->mapFileName();
        }
        std::string mapHash(){
            return BWAPI::Broodwar->mapHash();
        }
        int mapHeight(){
            return BWAPI::Broodwar->mapHeight();
        }
        std::string mapName(){
            return BWAPI::Broodwar->mapName();
        }
        std::string mapPathName(){
            return BWAPI::Broodwar->mapPathName();
        }
        int mapWidth(){
            return BWAPI::Broodwar->mapWidth();
        }
// virtual Player 	neutral () const =0
// virtual Playerset & 	observers ()=0
        void pauseGame(){
            BWAPI::Broodwar->pauseGame();
        }
        void pingMinimap(int x, int y){
            BWAPI::Broodwar->pingMinimap(x, y);
        }
// void 	pingMinimap (BWAPI::Position p)
// void 	printf (const char *format,...)
        void restartGame(){
            BWAPI::Broodwar->restartGame();
        }
        void resumeGame(){
            BWAPI::Broodwar->resumeGame();
        }
// virtual Player 	self () const =0
// void 	sendText (const char *format,...)
// void 	sendTextEx (bool toAllies, const char *format,...)
// virtual bool 	setAlliance (BWAPI::Player player, bool allied=true, bool alliedVictory=true)=0
// virtual void 	setCommandOptimizationLevel (int level)=0
        void setFrameSkip(int frameSkip){
            BWAPI::Broodwar->setFrameSkip(frameSkip);
        }
        void setGUI(bool enabled){
            BWAPI::Broodwar->setGUI(enabled);
        }
// virtual bool 	setLastError (BWAPI::Error e=Errors::None) const =0
        void setLatCom(bool isEnabled){
            BWAPI::Broodwar->setLatCom(isEnabled);
        }
        void setLocalSpeed(int speed){
            BWAPI::Broodwar->setLocalSpeed(speed);
        }
// virtual bool 	setMap (const char *mapFileName)=0
// bool 	setMap (const std::string &mapFileName)
// virtual bool 	setRevealAll (bool reveal=true)=0
// virtual void 	setScreenPosition (int x, int y)=0
// void 	setScreenPosition (BWAPI::Position p)
// virtual bool 	setVision (BWAPI::Player player, bool enabled=true)=0
// virtual void 	vPrintf (const char *format, va_list args)=0
// void 	vSendText (const char *format, va_list args)
// virtual void 	vSendTextEx (bool toAllies, const char *format, va_list args)=0
    }
}


namespace py = pybind11;

PYBIND11_PLUGIN(pybrood) {
    py::module m("pybrood", "BWAPI python module");

    py::module m_Client = m.def_submodule("Client");
    m_Client.def("isConnected", &PyBinding::Client::isConnected);
    m_Client.def("connect", &PyBinding::Client::connect);
    m_Client.def("disconnect", &PyBinding::Client::disconnect);
    m_Client.def("update", &PyBinding::Client::update);

    // py::class_<BWAPI::TilePosition>(m, "TilePosition")
    //     .def(py::init<int, int>())
    //     .def("getLength", &BWAPI::TilePosition::getLength);

    py::module m_Game = m.def_submodule("Game");
    //
    m_Game.def("countdownTimer", &PyBinding::Game::countdownTimer);
    m_Game.def("elapsedTime", &PyBinding::Game::elapsedTime);
    m_Game.def("enableFlag", &PyBinding::Game::enableFlag);
    //
    m_Game.def("getAverageFPS", &PyBinding::Game::getAverageFPS);
    //
    m_Game.def("getFPS", &PyBinding::Game::getFPS);
    m_Game.def("getFrameCount", &PyBinding::Game::getFrameCount);
    //
    m_Game.def("getLastEventTime", &PyBinding::Game::getLastEventTime);
    m_Game.def("getLatency", &PyBinding::Game::getLatency);
    m_Game.def("getLatencyFrames", &PyBinding::Game::getLatencyFrames);
    m_Game.def("getLatencyTime", &PyBinding::Game::getLatencyTime);
    //
    m_Game.def("getRemainingLatencyFrames", &PyBinding::Game::getRemainingLatencyFrames);
    m_Game.def("getRemainingLatencyTime", &PyBinding::Game::getRemainingLatencyTime);
    m_Game.def("getReplayFrameCount", &PyBinding::Game::getReplayFrameCount);
    m_Game.def("getRevision", &PyBinding::Game::getRevision);
    //
    m_Game.def("hasCreep", &PyBinding::Game::hasCreep);
    //
    m_Game.def("isBattleNet", &PyBinding::Game::isBattleNet);
    //
    m_Game.def("isDebug", &PyBinding::Game::isDebug);
    m_Game.def("isExplored", &PyBinding::Game::isExplored);
    //
    m_Game.def("isFlagEnabled", &PyBinding::Game::isFlagEnabled);
    m_Game.def("isGUIEnabled", &PyBinding::Game::isGUIEnabled);
    m_Game.def("isInGame", &PyBinding::Game::isInGame);
    m_Game.def("isLatComEnabled", &PyBinding::Game::isLatComEnabled);
    m_Game.def("isMultiplayer", &PyBinding::Game::isMultiplayer);
    m_Game.def("isPaused", &PyBinding::Game::isPaused);
    m_Game.def("isReplay", &PyBinding::Game::isReplay);
    //
    m_Game.def("isVisible", &PyBinding::Game::isVisible);
    //
    m_Game.def("isWalkable", &PyBinding::Game::isWalkable);
    //
    m_Game.def("leaveGame", &PyBinding::Game::leaveGame);
    m_Game.def("mapFileName", &PyBinding::Game::mapFileName);
    m_Game.def("mapHash", &PyBinding::Game::mapHash);
    m_Game.def("mapHeight", &PyBinding::Game::mapHeight);
    m_Game.def("mapName", &PyBinding::Game::mapName);
    m_Game.def("mapPathName", &PyBinding::Game::mapPathName);
    m_Game.def("mapWidth", &PyBinding::Game::mapWidth);
    //
    m_Game.def("pauseGame", &PyBinding::Game::pauseGame);
    m_Game.def("pingMinimap", &PyBinding::Game::pingMinimap);
    //
    m_Game.def("restartGame", &PyBinding::Game::restartGame);
    m_Game.def("resumeGame", &PyBinding::Game::resumeGame);
    //
    m_Game.def("setFrameSkip", &PyBinding::Game::setFrameSkip);
    m_Game.def("setGUI", &PyBinding::Game::setGUI);
    //
    m_Game.def("setLatCom", &PyBinding::Game::setLatCom);
    m_Game.def("setLocalSpeed", &PyBinding::Game::setLocalSpeed);

    return m.ptr();
}
