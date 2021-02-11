#include "GameFightFighterNamedInformations.h"

void GameFightFighterNamedInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightFighterNamedInformations(input);
}

void GameFightFighterNamedInformations::deserializeAs_GameFightFighterNamedInformations(ICustomDataInput &input) {
    GameFightFighterInformations::deserialize(input);
    this->_nameFunc(input);
    this->status.deserialize(input);
    this->_leagueIdFunc(input);
    this->_ladderPositionFunc(input);
    this->_hiddenInPrefightFunc(input);
}

void GameFightFighterNamedInformations::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void GameFightFighterNamedInformations::_leagueIdFunc(ICustomDataInput &input) {
    this->leagueId = input.readVarShort();
}

void GameFightFighterNamedInformations::_ladderPositionFunc(ICustomDataInput &input) {
    this->ladderPosition = input.readInt();
}

void GameFightFighterNamedInformations::_hiddenInPrefightFunc(ICustomDataInput &input) {
    this->hiddenInPrefight = input.readBoolean();
}

