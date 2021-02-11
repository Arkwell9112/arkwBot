#include "SetEnablePVPRequestMessage.h"

void SetEnablePVPRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SetEnablePVPRequestMessage(input);
}

void SetEnablePVPRequestMessage::deserializeAs_SetEnablePVPRequestMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void SetEnablePVPRequestMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

