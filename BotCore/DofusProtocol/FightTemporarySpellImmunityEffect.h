#ifndef FIGHTTEMPORARYSPELLIMMUNITYEFFECT
#define FIGHTTEMPORARYSPELLIMMUNITYEFFECT

#include "../IO/ICustomDataInput.h"
#include "AbstractFightDispellableEffect.h"

class FightTemporarySpellImmunityEffect : public AbstractFightDispellableEffect {
public:
    int immuneSpellId = 0;
    unsigned int protocolId = 2653;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTemporarySpellImmunityEffect(ICustomDataInput &input);

    void _immuneSpellIdFunc(ICustomDataInput &input);
};

#endif