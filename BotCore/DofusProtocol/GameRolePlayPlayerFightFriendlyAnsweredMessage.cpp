#include "GameRolePlayPlayerFightFriendlyAnsweredMessage.h"

void GameRolePlayPlayerFightFriendlyAnsweredMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayPlayerFightFriendlyAnsweredMessage(input);
}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::deserializeAs_GameRolePlayPlayerFightFriendlyAnsweredMessage(
        ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_sourceIdFunc(input);
    this->_targetIdFunc(input);
    this->_acceptFunc(input);
}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::_sourceIdFunc(ICustomDataInput &input) {
    this->sourceId = input.readVarUhLong();

}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readVarUhLong();

}

void GameRolePlayPlayerFightFriendlyAnsweredMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

