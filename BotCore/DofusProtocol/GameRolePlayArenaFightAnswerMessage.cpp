#include "GameRolePlayArenaFightAnswerMessage.h"

void GameRolePlayArenaFightAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaFightAnswerMessage(input);
}

void GameRolePlayArenaFightAnswerMessage::deserializeAs_GameRolePlayArenaFightAnswerMessage(ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_acceptFunc(input);
}

void GameRolePlayArenaFightAnswerMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameRolePlayArenaFightAnswerMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

