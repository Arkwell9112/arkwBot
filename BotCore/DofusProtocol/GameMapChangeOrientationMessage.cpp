#include "GameMapChangeOrientationMessage.h"

void GameMapChangeOrientationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameMapChangeOrientationMessage(input);
}

void GameMapChangeOrientationMessage::deserializeAs_GameMapChangeOrientationMessage(ICustomDataInput &input) {
    this->orientation.deserialize(input);
}

