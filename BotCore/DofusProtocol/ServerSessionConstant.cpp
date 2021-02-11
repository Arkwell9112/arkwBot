#include "ServerSessionConstant.h"

void ServerSessionConstant::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ServerSessionConstant(input);
}

void ServerSessionConstant::deserializeAs_ServerSessionConstant(ICustomDataInput &input) {
    this->_idFunc(input);
}

void ServerSessionConstant::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

