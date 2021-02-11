#include "LockableChangeCodeMessage.h"

void LockableChangeCodeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LockableChangeCodeMessage(input);
}

void LockableChangeCodeMessage::deserializeAs_LockableChangeCodeMessage(ICustomDataInput &input) {
    this->_codeFunc(input);
}

void LockableChangeCodeMessage::_codeFunc(ICustomDataInput &input) {
    this->code = input.readUTF();
}

