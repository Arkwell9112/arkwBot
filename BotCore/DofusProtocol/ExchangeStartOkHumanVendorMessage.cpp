#include "ExchangeStartOkHumanVendorMessage.h"

void ExchangeStartOkHumanVendorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkHumanVendorMessage(input);
}

void ExchangeStartOkHumanVendorMessage::deserializeAs_ExchangeStartOkHumanVendorMessage(ICustomDataInput &input) {
    ObjectItemToSellInHumanVendorShop _item2;
    this->_sellerIdFunc(input);
    unsigned int _objectsInfosLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _objectsInfosLen; _i2++) {
        _item2.deserialize(input);
        this->objectsInfos.push_back(_item2);
    }
}

void ExchangeStartOkHumanVendorMessage::_sellerIdFunc(ICustomDataInput &input) {
    this->sellerId = input.readDouble();

}

void ExchangeStartOkHumanVendorMessage::_objectsInfosFunc(ICustomDataInput &input) {
    ObjectItemToSellInHumanVendorShop _item;
    _item.deserialize(input);
    this->objectsInfos.push_back(_item);
}

