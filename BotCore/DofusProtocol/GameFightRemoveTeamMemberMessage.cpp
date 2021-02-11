#include "GameFightRemoveTeamMemberMessage.h"

void GameFightRemoveTeamMemberMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightRemoveTeamMemberMessage(input);
}

void GameFightRemoveTeamMemberMessage::deserializeAs_GameFightRemoveTeamMemberMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_teamIdFunc(input);
    this->_charIdFunc(input);
}

void GameFightRemoveTeamMemberMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameFightRemoveTeamMemberMessage::_teamIdFunc(ICustomDataInput &input) {
    this->teamId = input.readByte();

}

void GameFightRemoveTeamMemberMessage::_charIdFunc(ICustomDataInput &input) {
    this->charId = input.readDouble();

}

