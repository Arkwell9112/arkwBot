#include "ObjectItemInformationWithQuantity.h"

void ObjectItemInformationWithQuantity::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemInformationWithQuantity(input);
}

void ObjectItemInformationWithQuantity::deserializeAs_ObjectItemInformationWithQuantity(ICustomDataInput &input) {
    ObjectItemMinimalInformation::deserialize(input);
    this->_quantityFunc(input);
}

void ObjectItemInformationWithQuantity::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

