#include "ObjectItemQuantity.h"

void ObjectItemQuantity::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemQuantity(input);
}

void ObjectItemQuantity::deserializeAs_ObjectItemQuantity(ICustomDataInput &input) {
    Item::deserialize(input);
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectItemQuantity::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectItemQuantity::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

