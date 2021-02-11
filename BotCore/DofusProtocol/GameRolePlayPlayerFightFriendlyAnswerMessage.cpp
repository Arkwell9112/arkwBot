#include "GameRolePlayPlayerFightFriendlyAnswerMessage.h"

void GameRolePlayPlayerFightFriendlyAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayPlayerFightFriendlyAnswerMessage(input);
}

void GameRolePlayPlayerFightFriendlyAnswerMessage::deserializeAs_GameRolePlayPlayerFightFriendlyAnswerMessage(
        ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_acceptFunc(input);
}

void GameRolePlayPlayerFightFriendlyAnswerMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameRolePlayPlayerFightFriendlyAnswerMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

