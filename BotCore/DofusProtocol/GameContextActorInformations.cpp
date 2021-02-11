#include "GameContextActorInformations.h"

void GameContextActorInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextActorInformations(input);
}

void GameContextActorInformations::deserializeAs_GameContextActorInformations(ICustomDataInput &input) {
    GameContextActorPositionInformations::deserialize(input);
    this->look.deserialize(input);
}

