#ifndef ARKWBOT_FIGHTMODULE_H
#define ARKWBOT_FIGHTMODULE_H

#include "FightContextModule.h"
#include "../../BotCore/Timeout/Timeout.h"
#include "../../BotCore/ClickManager.h"

class FightModule : public ModuleInterface, public TimeoutInterface, public PacketDispatcherInterface {
public:
    explicit FightModule() : isWaiting(false), fightContextModule(*this),
                             isFirst(true), isRetime(false), isKeyboard(false),
                             clickPoint(0, 0),
                             clickKey(0), count(0), isEnd(false) {};

    void init(const MapContext &context);

    void dispatcherCallBack(Packet &packet) override;

    void moduleCallBack(void *child) override;

    void timeoutCallBack(void *caller) override;

private:
    bool isWaiting;

    bool isFirst;

    bool isRetime;

    bool isKeyboard;

    bool isEnd;

    WORD clickKey;

    unsigned int count;

    std::string state;

    FightContextModule fightContextModule;

    Point clickPoint;

    Timeout clickFirst;

    Timeout clickSecond;
};

#endif //ARKWBOT_FIGHTMODULE_H