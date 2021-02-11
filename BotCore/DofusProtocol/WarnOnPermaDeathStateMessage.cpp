#include "WarnOnPermaDeathStateMessage.h"

void WarnOnPermaDeathStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_WarnOnPermaDeathStateMessage(input);
}

void WarnOnPermaDeathStateMessage::deserializeAs_WarnOnPermaDeathStateMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void WarnOnPermaDeathStateMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

