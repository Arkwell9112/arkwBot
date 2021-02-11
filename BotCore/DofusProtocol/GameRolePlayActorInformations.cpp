#include "GameRolePlayActorInformations.h"

void GameRolePlayActorInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayActorInformations(input);
}

void GameRolePlayActorInformations::deserializeAs_GameRolePlayActorInformations(ICustomDataInput &input) {
    GameContextActorInformations::deserialize(input);
}

