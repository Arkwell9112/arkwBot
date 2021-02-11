#include "GameRolePlayAggressionMessage.h"

void GameRolePlayAggressionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayAggressionMessage(input);
}

void GameRolePlayAggressionMessage::deserializeAs_GameRolePlayAggressionMessage(ICustomDataInput &input) {
    this->_attackerIdFunc(input);
    this->_defenderIdFunc(input);
}

void GameRolePlayAggressionMessage::_attackerIdFunc(ICustomDataInput &input) {
    this->attackerId = input.readVarUhLong();

}

void GameRolePlayAggressionMessage::_defenderIdFunc(ICustomDataInput &input) {
    this->defenderId = input.readVarUhLong();

}

