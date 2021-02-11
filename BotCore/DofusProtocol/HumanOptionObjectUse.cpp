#include "HumanOptionObjectUse.h"

void HumanOptionObjectUse::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanOptionObjectUse(input);
}

void HumanOptionObjectUse::deserializeAs_HumanOptionObjectUse(ICustomDataInput &input) {
    HumanOption::deserialize(input);
    this->_delayTypeIdFunc(input);
    this->_delayEndTimeFunc(input);
    this->_objectGIDFunc(input);
}

void HumanOptionObjectUse::_delayTypeIdFunc(ICustomDataInput &input) {
    this->delayTypeId = input.readByte();

}

void HumanOptionObjectUse::_delayEndTimeFunc(ICustomDataInput &input) {
    this->delayEndTime = input.readDouble();

}

void HumanOptionObjectUse::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

