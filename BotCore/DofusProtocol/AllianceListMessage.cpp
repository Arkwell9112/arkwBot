#include "AllianceListMessage.h"

void AllianceListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceListMessage(input);
}

void AllianceListMessage::deserializeAs_AllianceListMessage(ICustomDataInput &input) {
    AllianceFactSheetInformations _item1;
    unsigned int _alliancesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _alliancesLen; _i1++) {
        _item1.deserialize(input);
        this->alliances.push_back(_item1);
    }
}

void AllianceListMessage::_alliancesFunc(ICustomDataInput &input) {
    AllianceFactSheetInformations _item;
    _item.deserialize(input);
    this->alliances.push_back(_item);
}

