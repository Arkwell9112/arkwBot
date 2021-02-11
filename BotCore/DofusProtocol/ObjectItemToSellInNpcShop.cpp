#include "ObjectItemToSellInNpcShop.h"

void ObjectItemToSellInNpcShop::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemToSellInNpcShop(input);
}

void ObjectItemToSellInNpcShop::deserializeAs_ObjectItemToSellInNpcShop(ICustomDataInput &input) {
    ObjectItemMinimalInformation::deserialize(input);
    this->_objectPriceFunc(input);
    this->_buyCriterionFunc(input);
}

void ObjectItemToSellInNpcShop::_objectPriceFunc(ICustomDataInput &input) {
    this->objectPrice = input.readVarUhLong();

}

void ObjectItemToSellInNpcShop::_buyCriterionFunc(ICustomDataInput &input) {
    this->buyCriterion = input.readUTF();
}

