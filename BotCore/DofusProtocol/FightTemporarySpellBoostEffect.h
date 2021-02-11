#ifndef FIGHTTEMPORARYSPELLBOOSTEFFECT
#define FIGHTTEMPORARYSPELLBOOSTEFFECT

#include "../IO/ICustomDataInput.h"
#include "FightTemporaryBoostEffect.h"

class FightTemporarySpellBoostEffect : public FightTemporaryBoostEffect {
public:
    unsigned int boostedSpellId = 0;
    unsigned int protocolId = 846;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTemporarySpellBoostEffect(ICustomDataInput &input);

    void _boostedSpellIdFunc(ICustomDataInput &input);
};

#endif