#include "GameFightShowFighterRandomStaticPoseMessage.h"

void GameFightShowFighterRandomStaticPoseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightShowFighterRandomStaticPoseMessage(input);
}

void GameFightShowFighterRandomStaticPoseMessage::deserializeAs_GameFightShowFighterRandomStaticPoseMessage(
        ICustomDataInput &input) {
    GameFightShowFighterMessage::deserialize(input);
}

