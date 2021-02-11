#include "BreachExitResponseMessage.h"

void BreachExitResponseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachExitResponseMessage(input);
}

void BreachExitResponseMessage::deserializeAs_BreachExitResponseMessage(ICustomDataInput &input) {
    this->_exitedFunc(input);
}

void BreachExitResponseMessage::_exitedFunc(ICustomDataInput &input) {
    this->exited = input.readBoolean();
}

