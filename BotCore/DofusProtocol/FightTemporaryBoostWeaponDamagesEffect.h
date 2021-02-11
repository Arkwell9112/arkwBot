#ifndef FIGHTTEMPORARYBOOSTWEAPONDAMAGESEFFECT
#define FIGHTTEMPORARYBOOSTWEAPONDAMAGESEFFECT

#include "../IO/ICustomDataInput.h"
#include "FightTemporaryBoostEffect.h"

class FightTemporaryBoostWeaponDamagesEffect : public FightTemporaryBoostEffect {
public:
    int weaponTypeId = 0;
    unsigned int protocolId = 6312;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_FightTemporaryBoostWeaponDamagesEffect(ICustomDataInput &input);

    void _weaponTypeIdFunc(ICustomDataInput &input);
};

#endif