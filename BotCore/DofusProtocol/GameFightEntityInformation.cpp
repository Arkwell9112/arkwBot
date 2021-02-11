#include "GameFightEntityInformation.h"

void GameFightEntityInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightEntityInformation(input);
}

void GameFightEntityInformation::deserializeAs_GameFightEntityInformation(ICustomDataInput &input) {
    GameFightFighterInformations::deserialize(input);
    this->_entityModelIdFunc(input);
    this->_levelFunc(input);
    this->_masterIdFunc(input);
}

void GameFightEntityInformation::_entityModelIdFunc(ICustomDataInput &input) {
    this->entityModelId = input.readByte();

}

void GameFightEntityInformation::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void GameFightEntityInformation::_masterIdFunc(ICustomDataInput &input) {
    this->masterId = input.readDouble();

}

