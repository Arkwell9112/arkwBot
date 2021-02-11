#include "TaxCollectorListMessage.h"

void TaxCollectorListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorListMessage(input);
}

void TaxCollectorListMessage::deserializeAs_TaxCollectorListMessage(ICustomDataInput &input) {
    TaxCollectorFightersInformation _item2;
    AbstractTaxCollectorListMessage::deserialize(input);
    this->_nbcollectorMaxFunc(input);
    unsigned int _fightersInformationsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _fightersInformationsLen; _i2++) {
        _item2.deserialize(input);
        this->fightersInformations.push_back(_item2);
    }
    this->_infoTypeFunc(input);
}

void TaxCollectorListMessage::_nbcollectorMaxFunc(ICustomDataInput &input) {
    this->nbcollectorMax = input.readByte();

}

void TaxCollectorListMessage::_fightersInformationsFunc(ICustomDataInput &input) {
    TaxCollectorFightersInformation _item;
    _item.deserialize(input);
    this->fightersInformations.push_back(_item);
}

void TaxCollectorListMessage::_infoTypeFunc(ICustomDataInput &input) {
    this->infoType = input.readByte();

}

