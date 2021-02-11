#include "GameContextMoveElementMessage.h"

void GameContextMoveElementMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameContextMoveElementMessage(input);
}

void GameContextMoveElementMessage::deserializeAs_GameContextMoveElementMessage(ICustomDataInput &input) {
    this->movement.deserialize(input);
}

