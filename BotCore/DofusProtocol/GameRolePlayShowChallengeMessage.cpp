#include "GameRolePlayShowChallengeMessage.h"

void GameRolePlayShowChallengeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayShowChallengeMessage(input);
}

void GameRolePlayShowChallengeMessage::deserializeAs_GameRolePlayShowChallengeMessage(ICustomDataInput &input) {
    this->commonsInfos.deserialize(input);
}

