#include "ConfigManager.h"
#include "BotException.h"
#include <fstream>

ConfigManager ConfigManager::singleton = ConfigManager();

ConfigManager::ConfigManager()
        : isConfigInit(false), ips(), isIpsInit(false), isPacketsReferenceInit(false), actorID(0),
          isMapContextsInit(false), halfCellWidth(0), halfCellHeight(0) {
    path = std::string(std::getenv("HOMEDRIVE")) +
           std::string(std::getenv("HOMEPATH") + std::string("\\Documents\\ArkwBot"));
}

ConfigManager &ConfigManager::getInstance() {
    return singleton;
}

void ConfigManager::split(const std::string &input, std::list<std::string> &output, char splitter) {
    size_t prePos = 0;
    size_t postPos = input.find(splitter, 0);
    while (postPos != std::string::npos) {
        output.push_back(input.substr(prePos, postPos - prePos));
        prePos = postPos + 1;
        postPos = input.find(splitter, prePos);
    }
    output.push_back(input.substr(prePos, input.size() - prePos));
}

unsigned int ConfigManager::getPacketDelay() {
    return (rand() % 800) + 800;
}

char *ConfigManager::loadFile(std::string &name, int &rsize) const {
    std::ifstream file;
    file.open(path + "\\" + name, std::ios_base::binary);
    file.seekg(0, std::ifstream::end);
    int size = file.tellg();
    file.seekg(0);
    char *buffer = new char[size];
    file.read(buffer, size);
    file.close();
    rsize = size;
    return buffer;
}

bool ConfigManager::isIpOK(unsigned int address) const {
    return ips.find(address) != ips.end();
}

bool ConfigManager::isExMode() const {
    return config.at("mode").get<std::string>() == "Execute";
}

bool ConfigManager::isFindIpMode() const {
    return config.at("mode").get<std::string>() == "FindIp";
}

bool ConfigManager::isConsole() const {
    return config.at("console").get<bool>();
}

const std::string &ConfigManager::getPacketName(unsigned short id) const {
    try {
        return packetsReference.at(id);
    } catch (std::out_of_range &e) {
        return packetsReference.at(0);
    }
}

unsigned short ConfigManager::getPacketID(std::string &name) const {
    auto it = packetsReference.begin();
    while (it != packetsReference.end()) {
        if (it->second == name) {
            return it->first;
        }
        it++;
    }

    throw BotException(4);
}

double ConfigManager::getActorID() const {
    return actorID;
}

void ConfigManager::setActorID(double id) {
    actorID = id;
}

const std::string &ConfigManager::getCharacterName() const {
    return characterName;
}

void ConfigManager::setCharacterName(std::string &name) {
    characterName = name;
}

double ConfigManager::getPrintLevel() const {
    return config.at("printlevel").get<double>();
}

json ConfigManager::getPath() const {
    std::string pathName = std::string("Path.json");
    int size = 0;
    char *data = loadFile(pathName, size);
    std::string strData(data, size);
    json pathFile = json::parse(strData);
    delete[] data;
    return pathFile;
}

void ConfigManager::getPacketsReference() {
    if (!isPacketsReferenceInit) {
        int size = 0;
        std::string fileName = std::string("Messages.bin");
        char *data = loadFile(fileName, size);
        ICustomDataInput input((unsigned int) size, data);
        bool isEnd = false;
        while (!isEnd) {
            try {
                unsigned short id = input.readUnsignedShort();
                std::string name = input.readUTF();
                packetsReference.insert({id, name});
            } catch (BotException &e) {
                isEnd = true;
            }
        }

        packetsReference.insert({0, std::string("UnknownMessage")});

        delete[] data;

        isPacketsReferenceInit = true;
    }
}

void ConfigManager::getConfig() {
    if (!isConfigInit) {
        int size = 0;
        std::string name = std::string("Config.json");
        const char *data = loadFile(name, size);
        config = json::parse(std::string(data, size));
        delete[] data;
        isConfigInit = true;
    }
}

void ConfigManager::getIps() {
    if (!isIpsInit) {
        json &currentIps = config.at("ips");
        auto it = currentIps.begin();
        while (it != currentIps.end()) {
            std::list<std::string> partList;
            const std::string &data = it->get<std::string>();
            split(data, partList, '.');
            auto it2 = partList.begin();
            unsigned int address = 0;
            for (int i = 0; i < 4; i++) {
                address |= std::stoi(*it2) << (i * 8);
                it2++;
            }
            ips.insert(address);
            it++;
        }
        isIpsInit = true;
    }
}

void ConfigManager::getMapContexts() {
    if (!isMapContextsInit) {
        std::string name("MapData.bin");
        int size = 0;
        char *data = loadFile(name, size);
        ICustomDataInput input(size, data);
        while (!input.isEnd()) {
            unsigned int mapID = input.readUnsignedInt();
            MapContext context(mapID, input);
            mapContexts.insert({mapID, context});
        }
        delete[] data;
        isMapContextsInit = true;
    }
}

const MapContext &ConfigManager::getMapContext(unsigned int mapID) const {
    return mapContexts.at(mapID);
}

void ConfigManager::init() {
    getIps();
    getScreenPoints();
    getCollectables();
    getPacketsReference();
    getMapContexts();
}

void ConfigManager::getScreenPoints() {
    points.emplace_back(config.at("upX").get<int>(), config.at("upY").get<int>());
    points.emplace_back(config.at("rightX").get<int>(), config.at("rightY").get<int>());
    points.emplace_back(config.at("downX").get<int>(), config.at("downY").get<int>());
    points.emplace_back(config.at("leftX").get<int>(), config.at("leftY").get<int>());
    points.emplace_back(config.at("screenwidth").get<int>(), config.at("screenheight").get<int>());
    points.emplace_back(config.at("originX").get<int>(), config.at("originY").get<int>());

    halfCellWidth = config.at("halfcellwidth").get<double>();
    halfCellHeight = config.at("halfcellheight").get<double>();
}

const Point &ConfigManager::getScreenPoint(unsigned int pos) const {
    return points.at(pos);
}

double ConfigManager::getCellSize(bool isHeight) const {
    if (!isHeight) {
        return halfCellWidth;
    }

    return halfCellHeight;
}

void ConfigManager::getCollectables() {
    auto it = config.at("collectables").begin();
    while (it != config.at("collectables").end()) {
        Collectable collectable(*it);
        collectables.insert({collectable.getID(), collectable});
        it++;
    }
}

const Collectable &ConfigManager::getCollectable(unsigned int id) const {
    return collectables.at(id);
}

unsigned int ConfigManager::getMaxWeight() const {
    return config.at("maxweight").get<unsigned int>();
}

unsigned int ConfigManager::getMinWeight() const {
    return config.at("minweight").get<unsigned int>();
}

unsigned int ConfigManager::getPMCount() const {
    return config.at("pmcount").get<unsigned int>();
}

unsigned int ConfigManager::getSpellCount() const {
    return config.at("spellcount").get<unsigned int>();
}

void ConfigManager::preInit() {
    getConfig();
}

const std::string &ConfigManager::getFilePath() const {
    return path;
}

Point ConfigManager::getRevive() const {
    return Point(config.at("reviveX").get<int>(), config.at("reviveY").get<int>());
}