#include "GameRolePlayCharacterInformations.h"

void GameRolePlayCharacterInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayCharacterInformations(input);
}

void GameRolePlayCharacterInformations::deserializeAs_GameRolePlayCharacterInformations(ICustomDataInput &input) {
    GameRolePlayHumanoidInformations::deserialize(input);
    this->alignmentInfos.deserialize(input);
}

