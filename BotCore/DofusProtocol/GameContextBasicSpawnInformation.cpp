#include "../ProtocolTypeManager.h"
#include "GameContextBasicSpawnInformation.h"

void GameContextBasicSpawnInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextBasicSpawnInformation(input);
}

void GameContextBasicSpawnInformation::deserializeAs_GameContextBasicSpawnInformation(ICustomDataInput &input) {
    this->_teamIdFunc(input);
    this->_aliveFunc(input);
    unsigned int _id3 = input.readUnsignedShort();
    this->informations = ProtocolTypeManager::getObject<GameContextActorPositionInformations>(input, _id3);
}

void GameContextBasicSpawnInformation::_teamIdFunc(ICustomDataInput &input) {
    this->teamId = input.readByte();

}

void GameContextBasicSpawnInformation::_aliveFunc(ICustomDataInput &input) {
    this->alive = input.readBoolean();
}

