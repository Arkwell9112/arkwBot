#include "SpawnMonsterInformation.h"

void SpawnMonsterInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpawnMonsterInformation(input);
}

void SpawnMonsterInformation::deserializeAs_SpawnMonsterInformation(ICustomDataInput &input) {
    BaseSpawnMonsterInformation::deserialize(input);
    this->_creatureGradeFunc(input);
}

void SpawnMonsterInformation::_creatureGradeFunc(ICustomDataInput &input) {
    this->creatureGrade = input.readByte();

}

