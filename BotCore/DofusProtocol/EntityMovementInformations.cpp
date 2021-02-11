#include "EntityMovementInformations.h"

void EntityMovementInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EntityMovementInformations(input);
}

void EntityMovementInformations::deserializeAs_EntityMovementInformations(ICustomDataInput &input) {
    int _val2 = 0;
    this->_idFunc(input);
    unsigned int _stepsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _stepsLen; _i2++) {
        _val2 = input.readByte();
        this->steps.push_back(_val2);
    }
}

void EntityMovementInformations::_idFunc(ICustomDataInput &input) {
    this->id = input.readInt();
}

void EntityMovementInformations::_stepsFunc(ICustomDataInput &input) {
    int _val = input.readByte();
    this->steps.push_back(_val);
}

