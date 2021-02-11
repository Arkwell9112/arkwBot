#include "ExchangeOfflineSoldItemsMessage.h"

void ExchangeOfflineSoldItemsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeOfflineSoldItemsMessage(input);
}

void ExchangeOfflineSoldItemsMessage::deserializeAs_ExchangeOfflineSoldItemsMessage(ICustomDataInput &input) {
    ObjectItemQuantityPriceDateEffects _item1;
    ObjectItemQuantityPriceDateEffects _item2;
    unsigned int _bidHouseItemsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _bidHouseItemsLen; _i1++) {
        _item1.deserialize(input);
        this->bidHouseItems.push_back(_item1);
    }
    unsigned int _merchantItemsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _merchantItemsLen; _i2++) {
        _item2.deserialize(input);
        this->merchantItems.push_back(_item2);
    }
}

void ExchangeOfflineSoldItemsMessage::_bidHouseItemsFunc(ICustomDataInput &input) {
    ObjectItemQuantityPriceDateEffects _item;
    _item.deserialize(input);
    this->bidHouseItems.push_back(_item);
}

void ExchangeOfflineSoldItemsMessage::_merchantItemsFunc(ICustomDataInput &input) {
    ObjectItemQuantityPriceDateEffects _item;
    _item.deserialize(input);
    this->merchantItems.push_back(_item);
}

