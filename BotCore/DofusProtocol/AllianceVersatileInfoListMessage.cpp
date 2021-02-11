#include "AllianceVersatileInfoListMessage.h"

void AllianceVersatileInfoListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceVersatileInfoListMessage(input);
}

void AllianceVersatileInfoListMessage::deserializeAs_AllianceVersatileInfoListMessage(ICustomDataInput &input) {
    AllianceVersatileInformations _item1;
    unsigned int _alliancesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _alliancesLen; _i1++) {
        _item1.deserialize(input);
        this->alliances.push_back(_item1);
    }
}

void AllianceVersatileInfoListMessage::_alliancesFunc(ICustomDataInput &input) {
    AllianceVersatileInformations _item;
    _item.deserialize(input);
    this->alliances.push_back(_item);
}

