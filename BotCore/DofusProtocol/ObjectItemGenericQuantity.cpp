#include "ObjectItemGenericQuantity.h"

void ObjectItemGenericQuantity::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemGenericQuantity(input);
}

void ObjectItemGenericQuantity::deserializeAs_ObjectItemGenericQuantity(ICustomDataInput &input) {
    Item::deserialize(input);
    this->_objectGIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectItemGenericQuantity::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

void ObjectItemGenericQuantity::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

