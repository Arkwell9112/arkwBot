#include "GameFightPlacementSwapPositionsCancelMessage.h"

void GameFightPlacementSwapPositionsCancelMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPlacementSwapPositionsCancelMessage(input);
}

void GameFightPlacementSwapPositionsCancelMessage::deserializeAs_GameFightPlacementSwapPositionsCancelMessage(
        ICustomDataInput &input) {
    this->_requestIdFunc(input);
}

void GameFightPlacementSwapPositionsCancelMessage::_requestIdFunc(ICustomDataInput &input) {
    this->requestId = input.readInt();

}

