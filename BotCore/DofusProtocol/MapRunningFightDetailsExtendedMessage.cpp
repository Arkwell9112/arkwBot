#include "MapRunningFightDetailsExtendedMessage.h"

void MapRunningFightDetailsExtendedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_MapRunningFightDetailsExtendedMessage(input);
}

void
MapRunningFightDetailsExtendedMessage::deserializeAs_MapRunningFightDetailsExtendedMessage(ICustomDataInput &input) {
    NamedPartyTeam _item1;
    MapRunningFightDetailsMessage::deserialize(input);
    unsigned int _namedPartyTeamsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _namedPartyTeamsLen; _i1++) {
        _item1.deserialize(input);
        this->namedPartyTeams.push_back(_item1);
    }
}

void MapRunningFightDetailsExtendedMessage::_namedPartyTeamsFunc(ICustomDataInput &input) {
    NamedPartyTeam _item;
    _item.deserialize(input);
    this->namedPartyTeams.push_back(_item);
}

