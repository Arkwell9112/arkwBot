#include "FightTemporarySpellBoostEffect.h"

void FightTemporarySpellBoostEffect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTemporarySpellBoostEffect(input);
}

void FightTemporarySpellBoostEffect::deserializeAs_FightTemporarySpellBoostEffect(ICustomDataInput &input) {
    FightTemporaryBoostEffect::deserialize(input);
    this->_boostedSpellIdFunc(input);
}

void FightTemporarySpellBoostEffect::_boostedSpellIdFunc(ICustomDataInput &input) {
    this->boostedSpellId = input.readVarUhShort();

}

