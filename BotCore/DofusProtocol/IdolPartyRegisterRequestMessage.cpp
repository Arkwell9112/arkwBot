#include "IdolPartyRegisterRequestMessage.h"

void IdolPartyRegisterRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolPartyRegisterRequestMessage(input);
}

void IdolPartyRegisterRequestMessage::deserializeAs_IdolPartyRegisterRequestMessage(ICustomDataInput &input) {
    this->_registerFunc(input);
}

void IdolPartyRegisterRequestMessage::_registerFunc(ICustomDataInput &input) {
    this->reg = input.readBoolean();
}

