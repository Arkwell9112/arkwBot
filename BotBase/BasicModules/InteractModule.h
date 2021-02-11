#ifndef ARKWBOT_INTERACTMODULE_H
#define ARKWBOT_INTERACTMODULE_H

#include "../../BotCore/Timeout/Timeout.h"
#include "../../BotCore/WorldTools/Element.h"
#include "../../BotCore/PacketDispatcher/PacketDispatcherInterface.h"
#include "../../BotCore/ModuleInterface.h"
#include "../../BotCore/WorldTools/MapContext.h"
#include "FightModule.h"


class InteractModule : public TimeoutInterface, public PacketDispatcherInterface {
public:
    explicit InteractModule(ModuleInterface &_parent) : parent(_parent),
                                                        isWaiting(false), count(0),
                                                        clickPoint(0, 0), identifier(0) {};

    void init(const Element &_element, const Point &_offset);

    void timeoutCallBack(void *caller) override;

    void dispatcherCallBack(Packet &packet) override;

    void cancel();

private:
    int count;

    bool isWaiting;

    unsigned int identifier;

    ModuleInterface &parent;

    Point clickPoint;

    Timeout click;

    Timeout error;
};

#endif //ARKWBOT_INTERACTMODULE_H