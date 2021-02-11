#include "InteractiveUsedMessage.h"

void InteractiveUsedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InteractiveUsedMessage(input);
}

void InteractiveUsedMessage::deserializeAs_InteractiveUsedMessage(ICustomDataInput &input) {
    this->_entityIdFunc(input);
    this->_elemIdFunc(input);
    this->_skillIdFunc(input);
    this->_durationFunc(input);
    this->_canMoveFunc(input);
}

void InteractiveUsedMessage::_entityIdFunc(ICustomDataInput &input) {
    this->entityId = input.readVarUhLong();

}

void InteractiveUsedMessage::_elemIdFunc(ICustomDataInput &input) {
    this->elemId = input.readVarUhInt();

}

void InteractiveUsedMessage::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhShort();

}

void InteractiveUsedMessage::_durationFunc(ICustomDataInput &input) {
    this->duration = input.readVarUhShort();

}

void InteractiveUsedMessage::_canMoveFunc(ICustomDataInput &input) {
    this->canMove = input.readBoolean();
}

