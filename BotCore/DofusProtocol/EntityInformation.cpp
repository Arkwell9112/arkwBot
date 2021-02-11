#include "EntityInformation.h"

void EntityInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EntityInformation(input);
}

void EntityInformation::deserializeAs_EntityInformation(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_experienceFunc(input);
    this->_statusFunc(input);
}

void EntityInformation::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

void EntityInformation::_experienceFunc(ICustomDataInput &input) {
    this->experience = input.readVarUhInt();

}

void EntityInformation::_statusFunc(ICustomDataInput &input) {
    this->status = input.readBoolean();
}

