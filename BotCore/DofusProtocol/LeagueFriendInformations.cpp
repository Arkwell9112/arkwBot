#include "LeagueFriendInformations.h"

void LeagueFriendInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_LeagueFriendInformations(input);
}

void LeagueFriendInformations::deserializeAs_LeagueFriendInformations(ICustomDataInput &input) {
    AbstractContactInformations::deserialize(input);
    this->_playerIdFunc(input);
    this->_playerNameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->_levelFunc(input);
    this->_leagueIdFunc(input);
    this->_totalLeaguePointsFunc(input);
    this->_ladderPositionFunc(input);
}

void LeagueFriendInformations::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void LeagueFriendInformations::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

void LeagueFriendInformations::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();

}

void LeagueFriendInformations::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void LeagueFriendInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void LeagueFriendInformations::_leagueIdFunc(ICustomDataInput &input) {
    this->leagueId = input.readVarShort();
}

void LeagueFriendInformations::_totalLeaguePointsFunc(ICustomDataInput &input) {
    this->totalLeaguePoints = input.readVarShort();
}

void LeagueFriendInformations::_ladderPositionFunc(ICustomDataInput &input) {
    this->ladderPosition = input.readInt();
}

