#include "WarnOnPermaDeathMessage.h"

void WarnOnPermaDeathMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_WarnOnPermaDeathMessage(input);
}

void WarnOnPermaDeathMessage::deserializeAs_WarnOnPermaDeathMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void WarnOnPermaDeathMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

