#include "GameCautiousMapMovementMessage.h"

void GameCautiousMapMovementMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameCautiousMapMovementMessage(input);
}

void GameCautiousMapMovementMessage::deserializeAs_GameCautiousMapMovementMessage(ICustomDataInput &input) {
    GameMapMovementMessage::deserialize(input);
}

