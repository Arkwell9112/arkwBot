#ifndef FIGHTTRIGGEREDEFFECT
#define FIGHTTRIGGEREDEFFECT

#include "../IO/ICustomDataInput.h"
#include "AbstractFightDispellableEffect.h"

class FightTriggeredEffect : public AbstractFightDispellableEffect {
public:
    int param1 = 0;
    int param2 = 0;
    int param3 = 0;
    int delay = 0;
    unsigned int protocolId = 7490;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTriggeredEffect(ICustomDataInput &input);

    void _param1Func(ICustomDataInput &input);

    void _param2Func(ICustomDataInput &input);

    void _param3Func(ICustomDataInput &input);

    void _delayFunc(ICustomDataInput &input);
};

#endif