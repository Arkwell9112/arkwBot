#include "GameFightPlacementSwapPositionsRequestMessage.h"

void GameFightPlacementSwapPositionsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPlacementSwapPositionsRequestMessage(input);
}

void GameFightPlacementSwapPositionsRequestMessage::deserializeAs_GameFightPlacementSwapPositionsRequestMessage(
        ICustomDataInput &input) {
    GameFightPlacementPositionRequestMessage::deserialize(input);
    this->_requestedIdFunc(input);
}

void GameFightPlacementSwapPositionsRequestMessage::_requestedIdFunc(ICustomDataInput &input) {
    this->requestedId = input.readDouble();

}

