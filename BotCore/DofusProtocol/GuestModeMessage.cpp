#include "GuestModeMessage.h"

void GuestModeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuestModeMessage(input);
}

void GuestModeMessage::deserializeAs_GuestModeMessage(ICustomDataInput &input) {
    this->_activeFunc(input);
}

void GuestModeMessage::_activeFunc(ICustomDataInput &input) {
    this->active = input.readBoolean();
}

