#include "GameRolePlayMonsterAngryAtPlayerMessage.h"

void GameRolePlayMonsterAngryAtPlayerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayMonsterAngryAtPlayerMessage(input);
}

void GameRolePlayMonsterAngryAtPlayerMessage::deserializeAs_GameRolePlayMonsterAngryAtPlayerMessage(
        ICustomDataInput &input) {
    this->_playerIdFunc(input);
    this->_monsterGroupIdFunc(input);
    this->_angryStartTimeFunc(input);
    this->_attackTimeFunc(input);
}

void GameRolePlayMonsterAngryAtPlayerMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void GameRolePlayMonsterAngryAtPlayerMessage::_monsterGroupIdFunc(ICustomDataInput &input) {
    this->monsterGroupId = input.readDouble();

}

void GameRolePlayMonsterAngryAtPlayerMessage::_angryStartTimeFunc(ICustomDataInput &input) {
    this->angryStartTime = input.readDouble();

}

void GameRolePlayMonsterAngryAtPlayerMessage::_attackTimeFunc(ICustomDataInput &input) {
    this->attackTime = input.readDouble();

}

