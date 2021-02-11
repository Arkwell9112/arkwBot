#include "IdentificationSuccessWithLoginTokenMessage.h"

void IdentificationSuccessWithLoginTokenMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdentificationSuccessWithLoginTokenMessage(input);
}

void IdentificationSuccessWithLoginTokenMessage::deserializeAs_IdentificationSuccessWithLoginTokenMessage(
        ICustomDataInput &input) {
    IdentificationSuccessMessage::deserialize(input);
    this->_loginTokenFunc(input);
}

void IdentificationSuccessWithLoginTokenMessage::_loginTokenFunc(ICustomDataInput &input) {
    this->loginToken = input.readUTF();
}

