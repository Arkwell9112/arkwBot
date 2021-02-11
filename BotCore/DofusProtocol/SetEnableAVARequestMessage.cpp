#include "SetEnableAVARequestMessage.h"

void SetEnableAVARequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SetEnableAVARequestMessage(input);
}

void SetEnableAVARequestMessage::deserializeAs_SetEnableAVARequestMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void SetEnableAVARequestMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

