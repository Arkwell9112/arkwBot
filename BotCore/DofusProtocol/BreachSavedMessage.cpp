#include "BreachSavedMessage.h"

void BreachSavedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachSavedMessage(input);
}

void BreachSavedMessage::deserializeAs_BreachSavedMessage(ICustomDataInput &input) {
    this->_savedFunc(input);
}

void BreachSavedMessage::_savedFunc(ICustomDataInput &input) {
    this->saved = input.readBoolean();
}

