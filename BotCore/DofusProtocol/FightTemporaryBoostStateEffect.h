#ifndef FIGHTTEMPORARYBOOSTSTATEEFFECT
#define FIGHTTEMPORARYBOOSTSTATEEFFECT

#include "../IO/ICustomDataInput.h"
#include "FightTemporaryBoostEffect.h"

class FightTemporaryBoostStateEffect : public FightTemporaryBoostEffect {
public:
    int stateId = 0;
    unsigned int protocolId = 3882;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTemporaryBoostStateEffect(ICustomDataInput &input);

    void _stateIdFunc(ICustomDataInput &input);
};

#endif