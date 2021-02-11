#include "FightTemporaryBoostWeaponDamagesEffect.h"

void FightTemporaryBoostWeaponDamagesEffect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTemporaryBoostWeaponDamagesEffect(input);
}

void
FightTemporaryBoostWeaponDamagesEffect::deserializeAs_FightTemporaryBoostWeaponDamagesEffect(ICustomDataInput &input) {
    FightTemporaryBoostEffect::deserialize(input);
    this->_weaponTypeIdFunc(input);
}

void FightTemporaryBoostWeaponDamagesEffect::_weaponTypeIdFunc(ICustomDataInput &input) {
    this->weaponTypeId = input.readShort();
}

