#include "GameRolePlayPlayerFightRequestMessage.h"

void GameRolePlayPlayerFightRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayPlayerFightRequestMessage(input);
}

void
GameRolePlayPlayerFightRequestMessage::deserializeAs_GameRolePlayPlayerFightRequestMessage(ICustomDataInput &input) {
    this->_targetIdFunc(input);
    this->_targetCellIdFunc(input);
    this->_friendlyFunc(input);
}

void GameRolePlayPlayerFightRequestMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readVarUhLong();

}

void GameRolePlayPlayerFightRequestMessage::_targetCellIdFunc(ICustomDataInput &input) {
    this->targetCellId = input.readShort();

}

void GameRolePlayPlayerFightRequestMessage::_friendlyFunc(ICustomDataInput &input) {
    this->friendly = input.readBoolean();
}

