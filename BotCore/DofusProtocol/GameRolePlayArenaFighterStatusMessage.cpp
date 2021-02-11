#include "GameRolePlayArenaFighterStatusMessage.h"

void GameRolePlayArenaFighterStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaFighterStatusMessage(input);
}

void
GameRolePlayArenaFighterStatusMessage::deserializeAs_GameRolePlayArenaFighterStatusMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_playerIdFunc(input);
    this->_acceptedFunc(input);
}

void GameRolePlayArenaFighterStatusMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameRolePlayArenaFighterStatusMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readDouble();

}

void GameRolePlayArenaFighterStatusMessage::_acceptedFunc(ICustomDataInput &input) {
    this->accepted = input.readBoolean();
}

