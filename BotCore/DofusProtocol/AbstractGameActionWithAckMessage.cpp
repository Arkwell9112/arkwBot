#include "AbstractGameActionWithAckMessage.h"

void AbstractGameActionWithAckMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractGameActionWithAckMessage(input);
}

void AbstractGameActionWithAckMessage::deserializeAs_AbstractGameActionWithAckMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_waitAckIdFunc(input);
}

void AbstractGameActionWithAckMessage::_waitAckIdFunc(ICustomDataInput &input) {
    this->waitAckId = input.readShort();
}

