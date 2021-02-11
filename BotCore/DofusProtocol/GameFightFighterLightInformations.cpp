#include "../IO/BooleanByteWrapper.h"
#include "GameFightFighterLightInformations.h"

void GameFightFighterLightInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightFighterLightInformations(input);
}

void GameFightFighterLightInformations::deserializeAs_GameFightFighterLightInformations(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
    this->_idFunc(input);
    this->_waveFunc(input);
    this->_levelFunc(input);
    this->_breedFunc(input);
}

void GameFightFighterLightInformations::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->sex = BooleanByteWrapper::getFlag(_box0, 0);
    this->alive = BooleanByteWrapper::getFlag(_box0, 1);
}

void GameFightFighterLightInformations::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

void GameFightFighterLightInformations::_waveFunc(ICustomDataInput &input) {
    this->wave = input.readByte();

}

void GameFightFighterLightInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void GameFightFighterLightInformations::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();
}

