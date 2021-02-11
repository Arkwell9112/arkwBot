#include "ExchangeShopStockStartedMessage.h"

void ExchangeShopStockStartedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeShopStockStartedMessage(input);
}

void ExchangeShopStockStartedMessage::deserializeAs_ExchangeShopStockStartedMessage(ICustomDataInput &input) {
    ObjectItemToSell _item1;
    unsigned int _objectsInfosLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsInfosLen; _i1++) {
        _item1.deserialize(input);
        this->objectsInfos.push_back(_item1);
    }
}

void ExchangeShopStockStartedMessage::_objectsInfosFunc(ICustomDataInput &input) {
    ObjectItemToSell _item;
    _item.deserialize(input);
    this->objectsInfos.push_back(_item);
}

