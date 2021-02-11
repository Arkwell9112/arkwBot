#include "IdentificationAccountForceMessage.h"

void IdentificationAccountForceMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdentificationAccountForceMessage(input);
}

void IdentificationAccountForceMessage::deserializeAs_IdentificationAccountForceMessage(ICustomDataInput &input) {
    IdentificationMessage::deserialize(input);
    this->_forcedAccountLoginFunc(input);
}

void IdentificationAccountForceMessage::_forcedAccountLoginFunc(ICustomDataInput &input) {
    this->forcedAccountLogin = input.readUTF();
}

