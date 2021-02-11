#ifndef FIGHTTEMPORARYBOOSTEFFECT
#define FIGHTTEMPORARYBOOSTEFFECT

#include "../IO/ICustomDataInput.h"
#include "AbstractFightDispellableEffect.h"

class FightTemporaryBoostEffect : public AbstractFightDispellableEffect {
public:
    int delta = 0;
    unsigned int protocolId = 2053;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTemporaryBoostEffect(ICustomDataInput &input);

    void _deltaFunc(ICustomDataInput &input);
};

#endif