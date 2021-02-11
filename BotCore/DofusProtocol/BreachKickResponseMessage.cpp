#include "BreachKickResponseMessage.h"

void BreachKickResponseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachKickResponseMessage(input);
}

void BreachKickResponseMessage::deserializeAs_BreachKickResponseMessage(ICustomDataInput &input) {
    this->target.deserialize(input);
    this->_kickedFunc(input);
}

void BreachKickResponseMessage::_kickedFunc(ICustomDataInput &input) {
    this->kicked = input.readBoolean();
}

