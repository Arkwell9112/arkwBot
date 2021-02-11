#include "SpawnCompanionInformation.h"

void SpawnCompanionInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpawnCompanionInformation(input);
}

void SpawnCompanionInformation::deserializeAs_SpawnCompanionInformation(ICustomDataInput &input) {
    SpawnInformation::deserialize(input);
    this->_modelIdFunc(input);
    this->_levelFunc(input);
    this->_summonerIdFunc(input);
    this->_ownerIdFunc(input);
}

void SpawnCompanionInformation::_modelIdFunc(ICustomDataInput &input) {
    this->modelId = input.readByte();

}

void SpawnCompanionInformation::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void SpawnCompanionInformation::_summonerIdFunc(ICustomDataInput &input) {
    this->summonerId = input.readDouble();

}

void SpawnCompanionInformation::_ownerIdFunc(ICustomDataInput &input) {
    this->ownerId = input.readDouble();

}

