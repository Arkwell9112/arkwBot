#include "GameRolePlayAttackMonsterRequestMessage.h"

void GameRolePlayAttackMonsterRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayAttackMonsterRequestMessage(input);
}

void GameRolePlayAttackMonsterRequestMessage::deserializeAs_GameRolePlayAttackMonsterRequestMessage(
        ICustomDataInput &input) {
    this->_monsterGroupIdFunc(input);
}

void GameRolePlayAttackMonsterRequestMessage::_monsterGroupIdFunc(ICustomDataInput &input) {
    this->monsterGroupId = input.readDouble();

}

