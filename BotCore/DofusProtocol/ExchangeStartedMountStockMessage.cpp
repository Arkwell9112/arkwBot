#include "ExchangeStartedMountStockMessage.h"

void ExchangeStartedMountStockMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartedMountStockMessage(input);
}

void ExchangeStartedMountStockMessage::deserializeAs_ExchangeStartedMountStockMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    unsigned int _objectsInfosLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsInfosLen; _i1++) {
        _item1.deserialize(input);
        this->objectsInfos.push_back(_item1);
    }
}

void ExchangeStartedMountStockMessage::_objectsInfosFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->objectsInfos.push_back(_item);
}

