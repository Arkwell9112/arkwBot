#include "FightTemporaryBoostEffect.h"

void FightTemporaryBoostEffect::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightTemporaryBoostEffect(input);
}

void FightTemporaryBoostEffect::deserializeAs_FightTemporaryBoostEffect(ICustomDataInput &input) {
    AbstractFightDispellableEffect::deserialize(input);
    this->_deltaFunc(input);
}

void FightTemporaryBoostEffect::_deltaFunc(ICustomDataInput &input) {
    this->delta = input.readInt();
}

