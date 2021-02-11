#include "ServerSessionConstantString.h"

void ServerSessionConstantString::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerSessionConstantString(input);
}

void ServerSessionConstantString::deserializeAs_ServerSessionConstantString(ICustomDataInput &input) {
    ServerSessionConstant::deserialize(input);
    this->_valueFunc(input);
}

void ServerSessionConstantString::_valueFunc(ICustomDataInput &input) {
    this->value = input.readUTF();
}

