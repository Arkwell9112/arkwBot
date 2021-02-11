#include "FightTemporaryBoostStateEffect.h"

void FightTemporaryBoostStateEffect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTemporaryBoostStateEffect(input);
}

void FightTemporaryBoostStateEffect::deserializeAs_FightTemporaryBoostStateEffect(ICustomDataInput &input) {
    FightTemporaryBoostEffect::deserialize(input);
    this->_stateIdFunc(input);
}

void FightTemporaryBoostStateEffect::_stateIdFunc(ICustomDataInput &input) {
    this->stateId = input.readShort();
}

