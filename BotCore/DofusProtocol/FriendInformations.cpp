#include "FriendInformations.h"

void FriendInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendInformations(input);
}

void FriendInformations::deserializeAs_FriendInformations(ICustomDataInput &input) {
    AbstractContactInformations::deserialize(input);
    this->_playerStateFunc(input);
    this->_lastConnectionFunc(input);
    this->_achievementPointsFunc(input);
    this->_leagueIdFunc(input);
    this->_ladderPositionFunc(input);
}

void FriendInformations::_playerStateFunc(ICustomDataInput &input) {
    this->playerState = input.readByte();

}

void FriendInformations::_lastConnectionFunc(ICustomDataInput &input) {
    this->lastConnection = input.readVarUhShort();

}

void FriendInformations::_achievementPointsFunc(ICustomDataInput &input) {
    this->achievementPoints = input.readInt();
}

void FriendInformations::_leagueIdFunc(ICustomDataInput &input) {
    this->leagueId = input.readVarShort();
}

void FriendInformations::_ladderPositionFunc(ICustomDataInput &input) {
    this->ladderPosition = input.readInt();
}

