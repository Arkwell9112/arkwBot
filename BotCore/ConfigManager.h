#ifndef ARKWBOT_CONFIGMANAGER_H
#define ARKWBOT_CONFIGMANAGER_H

#include <string>
#include <list>
#include <set>
#include "../Libs/JSON/JSON.hpp"
#include "WorldTools/MapContext.h"
#include "WorldTools/Collectable.h"

using json = nlohmann::json;

class ConfigManager {
public:
    static ConfigManager &getInstance();

    static void split(const std::string &input, std::list<std::string> &output, char splitter);

    char *loadFile(std::string &name, int &rsize) const;

    bool isIpOK(unsigned int address) const;

    bool isExMode() const;

    bool isFindIpMode() const;

    bool isConsole() const;

    const std::string &getPacketName(unsigned short id) const;

    unsigned short getPacketID(std::string &name) const;

    double getActorID() const;

    void setActorID(double id);

    double getPrintLevel() const;

    unsigned int getMaxWeight() const;

    unsigned int getMinWeight() const;

    json getPath() const;

    const std::string &getFilePath() const;

    const MapContext &getMapContext(unsigned int mapID) const;

    const Point &getScreenPoint(unsigned int pos) const;

    double getCellSize(bool isHeight) const;

    const Collectable &getCollectable(unsigned int id) const;

    void init();

    void preInit();

    unsigned int getPMCount() const;

    unsigned int getSpellCount() const;

    unsigned short getTurnKey() const;

    unsigned short getSpellKey() const;

    unsigned short getCreatureKey() const;

    const std::string &getTypeName(unsigned short id) const;

private:
    ConfigManager();

    static ConfigManager singleton;

    void getMapContexts();

    void getPacketsReference();

    void getConfig();

    void getIps();

    void getScreenPoints();

    void getCollectables();

    bool isConfigInit;

    bool isIpsInit;

    bool isPacketsReferenceInit;

    bool isMapContextsInit;

    double actorID;

    double halfCellWidth;

    double halfCellHeight;

    json config;

    std::set<unsigned int> ips;

    std::string path;

    std::map<unsigned short, std::string> packetsReference;

    std::map<unsigned short, std::string> typesReference;

    std::string characterName;

    std::map<unsigned int, MapContext> mapContexts;

    std::vector<Point> points;

    std::map<unsigned int, Collectable> collectables;

    std::string unknown;
};

#endif //ARKWBOT_CONFIGMANAGER_H