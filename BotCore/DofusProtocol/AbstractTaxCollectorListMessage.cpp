#include "../ProtocolTypeManager.h"
#include "AbstractTaxCollectorListMessage.h"

void AbstractTaxCollectorListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AbstractTaxCollectorListMessage(input);
}

void AbstractTaxCollectorListMessage::deserializeAs_AbstractTaxCollectorListMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    TaxCollectorInformations _item1;
    unsigned int _informationsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _informationsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<TaxCollectorInformations>(input, _id1);
        this->informations.push_back(_item1);
    }
}

void AbstractTaxCollectorListMessage::_informationsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    TaxCollectorInformations _item = ProtocolTypeManager::getObject<TaxCollectorInformations>(input, _id);
    _item.deserialize(input);
    this->informations.push_back(_item);
}

