#include "ExchangeStartedBidSellerMessage.h"

void ExchangeStartedBidSellerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartedBidSellerMessage(input);
}

void ExchangeStartedBidSellerMessage::deserializeAs_ExchangeStartedBidSellerMessage(ICustomDataInput &input) {
    ObjectItemToSellInBid _item2;
    this->sellerDescriptor.deserialize(input);
    unsigned int _objectsInfosLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _objectsInfosLen; _i2++) {
        _item2.deserialize(input);
        this->objectsInfos.push_back(_item2);
    }
}

void ExchangeStartedBidSellerMessage::_objectsInfosFunc(ICustomDataInput &input) {
    ObjectItemToSellInBid _item;
    _item.deserialize(input);
    this->objectsInfos.push_back(_item);
}

