#ifndef GAMEFIGHTEFFECTTRIGGERCOUNT
#define GAMEFIGHTEFFECTTRIGGERCOUNT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class GameFightEffectTriggerCount : public NetworkInterface {
public:
    unsigned int effectId = 0;
    double targetId = 0;
    unsigned int count = 0;
    unsigned int protocolId = 145;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_GameFightEffectTriggerCount(ICustomDataInput &input);

    void _effectIdFunc(ICustomDataInput &input);

    void _targetIdFunc(ICustomDataInput &input);

    void _countFunc(ICustomDataInput &input);
};

#endif