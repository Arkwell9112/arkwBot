#ifndef ARKWBOT_FIGHTCONTEXTMODULE_H
#define ARKWBOT_FIGHTCONTEXTMODULE_H

#include "../../BotCore/WorldTools/FightTools/FightPoint.h"
#include "../../BotCore/WorldTools/MapContext.h"
#include "../../BotCore/ModuleInterface.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcherInterface.h"

class FightContextModule : public PacketDispatcherInterface {
public:
    explicit FightContextModule(ModuleInterface &_parent) : parent(_parent), playerPos(nullptr), fighterPos(nullptr),
                                                            isWaiting(false), context(nullptr),
                                                            turnCount(0), isLock(false) {};

    void dispatcherCallBack(Packet &packet) override;

    void init(const MapContext &_context);

    void stop();

    const FightPoint &getMovePoint();

    const FightPoint &getFighterPos() const;

private:
    ModuleInterface &parent;

    const FightPoint *playerPos;

    const FightPoint *fighterPos;

    const MapContext *context;

    unsigned int turnCount;

    bool isLock;

    bool isWaiting;
};

#endif //ARKWBOT_FIGHTCONTEXTMODULE_H