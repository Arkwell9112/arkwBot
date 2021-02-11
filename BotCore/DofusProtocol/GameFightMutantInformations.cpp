#include "GameFightMutantInformations.h"

void GameFightMutantInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightMutantInformations(input);
}

void GameFightMutantInformations::deserializeAs_GameFightMutantInformations(ICustomDataInput &input) {
    GameFightFighterNamedInformations::deserialize(input);
    this->_powerLevelFunc(input);
}

void GameFightMutantInformations::_powerLevelFunc(ICustomDataInput &input) {
    this->powerLevel = input.readByte();

}

