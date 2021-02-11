#include "AcquaintanceSearchMessage.h"

void AcquaintanceSearchMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AcquaintanceSearchMessage(input);
}

void AcquaintanceSearchMessage::deserializeAs_AcquaintanceSearchMessage(ICustomDataInput &input) {
    this->_nicknameFunc(input);
}

void AcquaintanceSearchMessage::_nicknameFunc(ICustomDataInput &input) {
    this->nickname = input.readUTF();
}

