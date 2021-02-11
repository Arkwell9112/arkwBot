#include "ServerSessionConstantInteger.h"

void ServerSessionConstantInteger::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerSessionConstantInteger(input);
}

void ServerSessionConstantInteger::deserializeAs_ServerSessionConstantInteger(ICustomDataInput &input) {
    ServerSessionConstant::deserialize(input);
    this->_valueFunc(input);
}

void ServerSessionConstantInteger::_valueFunc(ICustomDataInput &input) {
    this->value = input.readInt();
}

