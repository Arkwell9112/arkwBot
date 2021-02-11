#include "ServerSessionConstantLong.h"

void ServerSessionConstantLong::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerSessionConstantLong(input);
}

void ServerSessionConstantLong::deserializeAs_ServerSessionConstantLong(ICustomDataInput &input) {
    ServerSessionConstant::deserialize(input);
    this->_valueFunc(input);
}

void ServerSessionConstantLong::_valueFunc(ICustomDataInput &input) {
    this->value = input.readDouble();

}

