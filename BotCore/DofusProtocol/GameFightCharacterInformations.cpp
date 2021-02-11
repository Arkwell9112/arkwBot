#include "GameFightCharacterInformations.h"

void GameFightCharacterInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightCharacterInformations(input);
}

void GameFightCharacterInformations::deserializeAs_GameFightCharacterInformations(ICustomDataInput &input) {
    GameFightFighterNamedInformations::deserialize(input);
    this->_levelFunc(input);
    this->alignmentInfos.deserialize(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
}

void GameFightCharacterInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

void GameFightCharacterInformations::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();
}

void GameFightCharacterInformations::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

