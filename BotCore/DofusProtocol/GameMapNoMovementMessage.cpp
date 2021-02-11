#include "GameMapNoMovementMessage.h"

void GameMapNoMovementMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameMapNoMovementMessage(input);
}

void GameMapNoMovementMessage::deserializeAs_GameMapNoMovementMessage(ICustomDataInput &input) {
    this->_cellXFunc(input);
    this->_cellYFunc(input);
}

void GameMapNoMovementMessage::_cellXFunc(ICustomDataInput &input) {
    this->cellX = input.readShort();
}

void GameMapNoMovementMessage::_cellYFunc(ICustomDataInput &input) {
    this->cellY = input.readShort();
}

