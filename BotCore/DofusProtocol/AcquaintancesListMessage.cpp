#include "../ProtocolTypeManager.h"
#include "AcquaintancesListMessage.h"

void AcquaintancesListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AcquaintancesListMessage(input);
}

void AcquaintancesListMessage::deserializeAs_AcquaintancesListMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    AcquaintanceInformation _item1;
    unsigned int _acquaintanceListLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _acquaintanceListLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<AcquaintanceInformation>(input, _id1);
        this->acquaintanceList.push_back(_item1);
    }
}

void AcquaintancesListMessage::_acquaintanceListFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    AcquaintanceInformation _item = ProtocolTypeManager::getObject<AcquaintanceInformation>(input, _id);
    _item.deserialize(input);
    this->acquaintanceList.push_back(_item);
}

