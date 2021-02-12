#ifndef ARKWBOT_MAPCONTEXTMODULE_H
#define ARKWBOT_MAPCONTEXTMODULE_H

#include "../../BotCore/WorldTools/MapContext.h"
#include "../../BotCore/DofusProtocol/MapComplementaryInformationsDataMessage.h"
#include "../../BotCore/ModuleInterface.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcherInterface.h"
#include "FightModule.h"

class MapContextModule : public PacketDispatcherInterface {
public:
    explicit MapContextModule(ModuleInterface &_parent) : mapID(0), parent(_parent), context(nullptr),
                                                          inventoryWeight(0), isDead(false) {};

    void dispatcherCallBack(Packet &packet) override;

    const MapContext &getContext() const;

    const MapComplementaryInformationsDataMessage &getMessage() const;

    unsigned int getWeight() const;

    void setIsDead();

    bool getIsDead();

private:
    ModuleInterface &parent;

    const MapContext *context;

    double mapID;

    unsigned int inventoryWeight;

    bool isDead;

    MapComplementaryInformationsDataMessage message;

    FightModule fightModule;
};

#endif //ARKWBOT_MAPCONTEXTMODULE_H