#include "GameCautiousMapMovementRequestMessage.h"

void GameCautiousMapMovementRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameCautiousMapMovementRequestMessage(input);
}

void
GameCautiousMapMovementRequestMessage::deserializeAs_GameCautiousMapMovementRequestMessage(ICustomDataInput &input) {
    GameMapMovementRequestMessage::deserialize(input);
}

