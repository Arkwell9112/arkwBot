#include "PartyLocateMembersMessage.h"

void PartyLocateMembersMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyLocateMembersMessage(input);
}

void PartyLocateMembersMessage::deserializeAs_PartyLocateMembersMessage(ICustomDataInput &input) {
    PartyMemberGeoPosition _item1;
    AbstractPartyMessage::deserialize(input);
    unsigned int _geopositionsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _geopositionsLen; _i1++) {
        _item1.deserialize(input);
        this->geopositions.push_back(_item1);
    }
}

void PartyLocateMembersMessage::_geopositionsFunc(ICustomDataInput &input) {
    PartyMemberGeoPosition _item;
    _item.deserialize(input);
    this->geopositions.push_back(_item);
}

