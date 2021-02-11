#include "ObjectItemQuantityPriceDateEffects.h"

void ObjectItemQuantityPriceDateEffects::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemQuantityPriceDateEffects(input);
}

void ObjectItemQuantityPriceDateEffects::deserializeAs_ObjectItemQuantityPriceDateEffects(ICustomDataInput &input) {
    ObjectItemGenericQuantity::deserialize(input);
    this->_priceFunc(input);
    this->effects.deserialize(input);
    this->_dateFunc(input);
}

void ObjectItemQuantityPriceDateEffects::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

void ObjectItemQuantityPriceDateEffects::_dateFunc(ICustomDataInput &input) {
    this->date = input.readInt();

}

