#include "ExchangeStartedTaxCollectorShopMessage.h"

void ExchangeStartedTaxCollectorShopMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartedTaxCollectorShopMessage(input);
}

void
ExchangeStartedTaxCollectorShopMessage::deserializeAs_ExchangeStartedTaxCollectorShopMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    unsigned int _objectsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsLen; _i1++) {
        _item1.deserialize(input);
        this->objects.push_back(_item1);
    }
    this->_kamasFunc(input);
}

void ExchangeStartedTaxCollectorShopMessage::_objectsFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->objects.push_back(_item);
}

void ExchangeStartedTaxCollectorShopMessage::_kamasFunc(ICustomDataInput &input) {
    this->kamas = input.readVarUhLong();

}

