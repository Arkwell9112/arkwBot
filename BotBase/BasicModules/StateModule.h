#ifndef ARKWBOT_STATEMODULE_H
#define ARKWBOT_STATEMODULE_H

#include "WorldPathModuleInterface.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcherInterface.h"
#include "../../BotCore/ModuleInterface.h"
#include "../../BotCore/Timeout/Timeout.h"
#include <string>

class StateModule : public WorldPathModuleInterface, public PacketDispatcherInterface, public TimeoutInterface {
public:
    explicit StateModule(ModuleInterface &_parent) : actionPos(0), point(nullptr), clickPoint(0, 0), parent(_parent),
                                                     isWaiting(false), _isFirst(true), isKeybd(false), clickKey(0) {
        std::string stateName = "Start";
        std::string operatorName = "Init";
        std::string result = "Begin";
        addOperation(stateName, operatorName, result);
    };

    void init(WorldPath &path, const MapContextModule &contextModule) override;

    void timeoutCallBack(void *caller) final;

    void dispatcherCallBack(Packet &packet) final;

    void cancel() override;

protected:
    virtual void uninit() = 0;

    void addAction(std::string &stateName, std::vector<unsigned int> &actionParams);

    void addOperation(std::string &stateName, std::string &operatorName, std::string &result);

    ModuleInterface &parent;

private:
    void doOperation(const std::string &argument);

    void doState(bool isFirst);

    const WorldPoint *point;

    unsigned int actionPos;

    bool isWaiting;

    bool _isFirst;

    bool isKeybd;

    WORD clickKey;

    std::string state;

    std::map<std::string, std::string> operations;

    std::map<std::string, std::vector<unsigned int>> actions;

    Timeout clickFirst;

    Timeout clickSecond;

    Timeout error;

    Point clickPoint;
};

#endif //ARKWBOT_STATEMODULE_H