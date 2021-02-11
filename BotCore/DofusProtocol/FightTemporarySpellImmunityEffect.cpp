#include "FightTemporarySpellImmunityEffect.h"

void FightTemporarySpellImmunityEffect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTemporarySpellImmunityEffect(input);
}

void FightTemporarySpellImmunityEffect::deserializeAs_FightTemporarySpellImmunityEffect(ICustomDataInput &input) {
    AbstractFightDispellableEffect::deserialize(input);
    this->_immuneSpellIdFunc(input);
}

void FightTemporarySpellImmunityEffect::_immuneSpellIdFunc(ICustomDataInput &input) {
    this->immuneSpellId = input.readInt();
}

