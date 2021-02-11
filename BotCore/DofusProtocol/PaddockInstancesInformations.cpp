#include "../ProtocolTypeManager.h"
#include "PaddockInstancesInformations.h"

void PaddockInstancesInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockInstancesInformations(input);
}

void PaddockInstancesInformations::deserializeAs_PaddockInstancesInformations(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    PaddockBuyableInformations _item1;
    PaddockInformations::deserialize(input);
    unsigned int _paddocksLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _paddocksLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<PaddockBuyableInformations>(input, _id1);
        this->paddocks.push_back(_item1);
    }
}

void PaddockInstancesInformations::_paddocksFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    PaddockBuyableInformations _item = ProtocolTypeManager::getObject<PaddockBuyableInformations>(input, _id);
    _item.deserialize(input);
    this->paddocks.push_back(_item);
}

