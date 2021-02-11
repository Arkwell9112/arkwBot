#include "BreachEnterMessage.h"

void BreachEnterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachEnterMessage(input);
}

void BreachEnterMessage::deserializeAs_BreachEnterMessage(ICustomDataInput &input) {
    this->_ownerFunc(input);
}

void BreachEnterMessage::_ownerFunc(ICustomDataInput &input) {
    this->owner = input.readVarUhLong();

}

