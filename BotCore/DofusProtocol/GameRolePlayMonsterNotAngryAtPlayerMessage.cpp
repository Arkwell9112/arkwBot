#include "GameRolePlayMonsterNotAngryAtPlayerMessage.h"

void GameRolePlayMonsterNotAngryAtPlayerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayMonsterNotAngryAtPlayerMessage(input);
}

void GameRolePlayMonsterNotAngryAtPlayerMessage::deserializeAs_GameRolePlayMonsterNotAngryAtPlayerMessage(
        ICustomDataInput &input) {
    this->_playerIdFunc(input);
    this->_monsterGroupIdFunc(input);
}

void GameRolePlayMonsterNotAngryAtPlayerMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

void GameRolePlayMonsterNotAngryAtPlayerMessage::_monsterGroupIdFunc(ICustomDataInput &input) {
    this->monsterGroupId = input.readDouble();

}

