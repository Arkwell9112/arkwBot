#include "GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage.h"

void GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage(input);
}

void
GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage::deserializeAs_GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage(
        ICustomDataInput &input) {
    GameRolePlayArenaUpdatePlayerInfosMessage::deserialize(input);
    this->team.deserialize(input);
    this->duel.deserialize(input);
}

