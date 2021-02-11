#include "BaseSpawnMonsterInformation.h"

void BaseSpawnMonsterInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BaseSpawnMonsterInformation(input);
}

void BaseSpawnMonsterInformation::deserializeAs_BaseSpawnMonsterInformation(ICustomDataInput &input) {
    SpawnInformation::deserialize(input);
    this->_creatureGenericIdFunc(input);
}

void BaseSpawnMonsterInformation::_creatureGenericIdFunc(ICustomDataInput &input) {
    this->creatureGenericId = input.readVarUhShort();

}

