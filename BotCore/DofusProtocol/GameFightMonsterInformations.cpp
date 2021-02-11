#include "GameFightMonsterInformations.h"

void GameFightMonsterInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightMonsterInformations(input);
}

void GameFightMonsterInformations::deserializeAs_GameFightMonsterInformations(ICustomDataInput &input) {
    GameFightAIInformations::deserialize(input);
    this->_creatureGenericIdFunc(input);
    this->_creatureGradeFunc(input);
    this->_creatureLevelFunc(input);
}

void GameFightMonsterInformations::_creatureGenericIdFunc(ICustomDataInput &input) {
    this->creatureGenericId = input.readVarUhShort();

}

void GameFightMonsterInformations::_creatureGradeFunc(ICustomDataInput &input) {
    this->creatureGrade = input.readByte();

}

void GameFightMonsterInformations::_creatureLevelFunc(ICustomDataInput &input) {
    this->creatureLevel = input.readShort();

}

