#include "BreachKickRequestMessage.h"

void BreachKickRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachKickRequestMessage(input);
}

void BreachKickRequestMessage::deserializeAs_BreachKickRequestMessage(ICustomDataInput &input) {
    this->_targetFunc(input);
}

void BreachKickRequestMessage::_targetFunc(ICustomDataInput &input) {
    this->target = input.readVarUhLong();

}

