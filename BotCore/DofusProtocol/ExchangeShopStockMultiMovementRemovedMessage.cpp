#include "ExchangeShopStockMultiMovementRemovedMessage.h"

void ExchangeShopStockMultiMovementRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeShopStockMultiMovementRemovedMessage(input);
}

void ExchangeShopStockMultiMovementRemovedMessage::deserializeAs_ExchangeShopStockMultiMovementRemovedMessage(
        ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _objectIdListLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectIdListLen; _i1++) {
        _val1 = input.readVarUhInt();

        this->objectIdList.push_back(_val1);
    }
}

void ExchangeShopStockMultiMovementRemovedMessage::_objectIdListFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->objectIdList.push_back(_val);
}

