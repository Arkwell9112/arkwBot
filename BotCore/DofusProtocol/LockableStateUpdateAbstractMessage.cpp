#include "LockableStateUpdateAbstractMessage.h"

void LockableStateUpdateAbstractMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LockableStateUpdateAbstractMessage(input);
}

void LockableStateUpdateAbstractMessage::deserializeAs_LockableStateUpdateAbstractMessage(ICustomDataInput &input) {
    this->_lockedFunc(input);
}

void LockableStateUpdateAbstractMessage::_lockedFunc(ICustomDataInput &input) {
    this->locked = input.readBoolean();
}

