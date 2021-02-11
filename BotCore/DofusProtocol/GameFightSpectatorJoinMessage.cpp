#include "GameFightSpectatorJoinMessage.h"

void GameFightSpectatorJoinMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightSpectatorJoinMessage(input);
}

void GameFightSpectatorJoinMessage::deserializeAs_GameFightSpectatorJoinMessage(ICustomDataInput &input) {
    NamedPartyTeam _item1;
    GameFightJoinMessage::deserialize(input);
    unsigned int _namedPartyTeamsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _namedPartyTeamsLen; _i1++) {
        _item1.deserialize(input);
        this->namedPartyTeams.push_back(_item1);
    }
}

void GameFightSpectatorJoinMessage::_namedPartyTeamsFunc(ICustomDataInput &input) {
    NamedPartyTeam _item;
    _item.deserialize(input);
    this->namedPartyTeams.push_back(_item);
}

