#include "GameMapChangeOrientationRequestMessage.h"

void GameMapChangeOrientationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameMapChangeOrientationRequestMessage(input);
}

void
GameMapChangeOrientationRequestMessage::deserializeAs_GameMapChangeOrientationRequestMessage(ICustomDataInput &input) {
    this->_directionFunc(input);
}

void GameMapChangeOrientationRequestMessage::_directionFunc(ICustomDataInput &input) {
    this->direction = input.readByte();

}

