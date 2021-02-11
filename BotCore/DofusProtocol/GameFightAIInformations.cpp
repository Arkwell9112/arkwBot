#include "GameFightAIInformations.h"

void GameFightAIInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightAIInformations(input);
}

void GameFightAIInformations::deserializeAs_GameFightAIInformations(ICustomDataInput &input) {
    GameFightFighterInformations::deserialize(input);
}

