#include "GameFightFighterNamedLightInformations.h"

void GameFightFighterNamedLightInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightFighterNamedLightInformations(input);
}

void
GameFightFighterNamedLightInformations::deserializeAs_GameFightFighterNamedLightInformations(ICustomDataInput &input) {
    GameFightFighterLightInformations::deserialize(input);
    this->_nameFunc(input);
}

void GameFightFighterNamedLightInformations::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

