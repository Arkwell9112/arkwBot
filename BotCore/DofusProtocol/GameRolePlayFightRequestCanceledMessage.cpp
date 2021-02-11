#include "GameRolePlayFightRequestCanceledMessage.h"

void GameRolePlayFightRequestCanceledMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayFightRequestCanceledMessage(input);
}

void GameRolePlayFightRequestCanceledMessage::deserializeAs_GameRolePlayFightRequestCanceledMessage(
        ICustomDataInput &input) {
    this->_fightIdFunc(input);
    this->_sourceIdFunc(input);
    this->_targetIdFunc(input);
}

void GameRolePlayFightRequestCanceledMessage::_fightIdFunc(ICustomDataInput &input) {
    this->fightId = input.readVarUhShort();

}

void GameRolePlayFightRequestCanceledMessage::_sourceIdFunc(ICustomDataInput &input) {
    this->sourceId = input.readDouble();

}

void GameRolePlayFightRequestCanceledMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

