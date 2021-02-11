#include "GameRolePlayArenaUpdatePlayerInfosMessage.h"

void GameRolePlayArenaUpdatePlayerInfosMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaUpdatePlayerInfosMessage(input);
}

void GameRolePlayArenaUpdatePlayerInfosMessage::deserializeAs_GameRolePlayArenaUpdatePlayerInfosMessage(
        ICustomDataInput &input) {
    this->solo.deserialize(input);
}

