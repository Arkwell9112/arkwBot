#include "IgnoredAddRequestMessage.h"

void IgnoredAddRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IgnoredAddRequestMessage(input);
}

void IgnoredAddRequestMessage::deserializeAs_IgnoredAddRequestMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
    this->_sessionFunc(input);
}

void IgnoredAddRequestMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void IgnoredAddRequestMessage::_sessionFunc(ICustomDataInput &input) {
    this->session = input.readBoolean();
}

