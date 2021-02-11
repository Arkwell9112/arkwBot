#include "LockableUseCodeMessage.h"

void LockableUseCodeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LockableUseCodeMessage(input);
}

void LockableUseCodeMessage::deserializeAs_LockableUseCodeMessage(ICustomDataInput &input) {
    this->_codeFunc(input);
}

void LockableUseCodeMessage::_codeFunc(ICustomDataInput &input) {
    this->code = input.readUTF();
}

