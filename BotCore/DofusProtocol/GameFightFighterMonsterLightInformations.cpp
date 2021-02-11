#include "GameFightFighterMonsterLightInformations.h"

void GameFightFighterMonsterLightInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightFighterMonsterLightInformations(input);
}

void GameFightFighterMonsterLightInformations::deserializeAs_GameFightFighterMonsterLightInformations(
        ICustomDataInput &input) {
    GameFightFighterLightInformations::deserialize(input);
    this->_creatureGenericIdFunc(input);
}

void GameFightFighterMonsterLightInformations::_creatureGenericIdFunc(ICustomDataInput &input) {
    this->creatureGenericId = input.readVarUhShort();

}

