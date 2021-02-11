#include "SpawnScaledMonsterInformation.h"

void SpawnScaledMonsterInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpawnScaledMonsterInformation(input);
}

void SpawnScaledMonsterInformation::deserializeAs_SpawnScaledMonsterInformation(ICustomDataInput &input) {
    BaseSpawnMonsterInformation::deserialize(input);
    this->_creatureLevelFunc(input);
}

void SpawnScaledMonsterInformation::_creatureLevelFunc(ICustomDataInput &input) {
    this->creatureLevel = input.readShort();

}

