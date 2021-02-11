#include "ExchangeShopStockMultiMovementUpdatedMessage.h"

void ExchangeShopStockMultiMovementUpdatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeShopStockMultiMovementUpdatedMessage(input);
}

void ExchangeShopStockMultiMovementUpdatedMessage::deserializeAs_ExchangeShopStockMultiMovementUpdatedMessage(
        ICustomDataInput &input) {
    ObjectItemToSell _item1;
    unsigned int _objectInfoListLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectInfoListLen; _i1++) {
        _item1.deserialize(input);
        this->objectInfoList.push_back(_item1);
    }
}

void ExchangeShopStockMultiMovementUpdatedMessage::_objectInfoListFunc(ICustomDataInput &input) {
    ObjectItemToSell _item;
    _item.deserialize(input);
    this->objectInfoList.push_back(_item);
}

