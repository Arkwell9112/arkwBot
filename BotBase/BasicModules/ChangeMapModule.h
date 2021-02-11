#ifndef ARKWBOT_CHANGEMAPMODULE_H
#define ARKWBOT_CHANGEMAPMODULE_H

#include "../../BotCore/PacketDispatcher/PacketDispatcherInterface.h"
#include "../../BotCore/Timeout/Timeout.h"
#include "../../BotCore/ModuleInterface.h"
#include "WorldPathModuleInterface.h"

class ChangeMapModule : public PacketDispatcherInterface, public TimeoutInterface, public WorldPathModuleInterface {
public:
    explicit ChangeMapModule(ModuleInterface &_parent) : parent(_parent), isWaiting(false),
                                                         clickPoint(0, 0) {};

    void init(WorldPath &path, const MapContextModule &contextModule) override;

    void timeoutCallBack(void *caller) override;

    void dispatcherCallBack(Packet &packet) override;

    void cancel() override;

private:
    ModuleInterface &parent;

    bool isWaiting;

    Point clickPoint;

    Timeout click;

    Timeout error;
};

#endif //ARKWBOT_CHANGEMAPMODULE_H