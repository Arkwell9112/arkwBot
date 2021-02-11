#include "GameFightFighterEntityLightInformation.h"

void GameFightFighterEntityLightInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightFighterEntityLightInformation(input);
}

void
GameFightFighterEntityLightInformation::deserializeAs_GameFightFighterEntityLightInformation(ICustomDataInput &input) {
    GameFightFighterLightInformations::deserialize(input);
    this->_entityModelIdFunc(input);
    this->_masterIdFunc(input);
}

void GameFightFighterEntityLightInformation::_entityModelIdFunc(ICustomDataInput &input) {
    this->entityModelId = input.readByte();

}

void GameFightFighterEntityLightInformation::_masterIdFunc(ICustomDataInput &input) {
    this->masterId = input.readDouble();

}

