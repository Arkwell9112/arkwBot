#include "GameRolePlayNpcWithQuestInformations.h"

void GameRolePlayNpcWithQuestInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayNpcWithQuestInformations(input);
}

void GameRolePlayNpcWithQuestInformations::deserializeAs_GameRolePlayNpcWithQuestInformations(ICustomDataInput &input) {
    GameRolePlayNpcInformations::deserialize(input);
    this->questFlag.deserialize(input);
}

