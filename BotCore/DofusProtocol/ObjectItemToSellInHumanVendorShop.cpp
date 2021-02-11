#include "../ProtocolTypeManager.h"
#include "ObjectItemToSellInHumanVendorShop.h"

void ObjectItemToSellInHumanVendorShop::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItemToSellInHumanVendorShop(input);
}

void ObjectItemToSellInHumanVendorShop::deserializeAs_ObjectItemToSellInHumanVendorShop(ICustomDataInput &input) {
    unsigned int _id2 = 0;
    ObjectEffect _item2;
    Item::deserialize(input);
    this->_objectGIDFunc(input);
    unsigned int _effectsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _effectsLen; _i2++) {
        _id2 = input.readUnsignedShort();
        _item2 = ProtocolTypeManager::getObject<ObjectEffect>(input, _id2);
        this->effects.push_back(_item2);
    }
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
    this->_objectPriceFunc(input);
    this->_publicPriceFunc(input);
}

void ObjectItemToSellInHumanVendorShop::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

void ObjectItemToSellInHumanVendorShop::_effectsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    ObjectEffect _item = ProtocolTypeManager::getObject<ObjectEffect>(input, _id);
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void ObjectItemToSellInHumanVendorShop::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectItemToSellInHumanVendorShop::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

void ObjectItemToSellInHumanVendorShop::_objectPriceFunc(ICustomDataInput &input) {
    this->objectPrice = input.readVarUhLong();

}

void ObjectItemToSellInHumanVendorShop::_publicPriceFunc(ICustomDataInput &input) {
    this->publicPrice = input.readVarUhLong();

}

