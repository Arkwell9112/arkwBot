#include "AbstractGameActionMessage.h"

void AbstractGameActionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractGameActionMessage(input);
}

void AbstractGameActionMessage::deserializeAs_AbstractGameActionMessage(ICustomDataInput &input) {
    this->_actionIdFunc(input);
    this->_sourceIdFunc(input);
}

void AbstractGameActionMessage::_actionIdFunc(ICustomDataInput &input) {
    this->actionId = input.readVarUhShort();

}

void AbstractGameActionMessage::_sourceIdFunc(ICustomDataInput &input) {
    this->sourceId = input.readDouble();

}

