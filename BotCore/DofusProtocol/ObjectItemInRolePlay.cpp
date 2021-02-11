#include "ObjectItemInRolePlay.h"

void ObjectItemInRolePlay::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemInRolePlay(input);
}

void ObjectItemInRolePlay::deserializeAs_ObjectItemInRolePlay(ICustomDataInput &input) {
    this->_cellIdFunc(input);
    this->_objectGIDFunc(input);
}

void ObjectItemInRolePlay::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

void ObjectItemInRolePlay::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

