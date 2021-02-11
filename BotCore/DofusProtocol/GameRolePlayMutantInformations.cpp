#include "GameRolePlayMutantInformations.h"

void GameRolePlayMutantInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayMutantInformations(input);
}

void GameRolePlayMutantInformations::deserializeAs_GameRolePlayMutantInformations(ICustomDataInput &input) {
    GameRolePlayHumanoidInformations::deserialize(input);
    this->_monsterIdFunc(input);
    this->_powerLevelFunc(input);
}

void GameRolePlayMutantInformations::_monsterIdFunc(ICustomDataInput &input) {
    this->monsterId = input.readVarUhShort();

}

void GameRolePlayMutantInformations::_powerLevelFunc(ICustomDataInput &input) {
    this->powerLevel = input.readByte();
}

