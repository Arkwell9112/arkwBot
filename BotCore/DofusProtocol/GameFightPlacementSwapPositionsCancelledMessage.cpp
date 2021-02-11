#include "GameFightPlacementSwapPositionsCancelledMessage.h"

void GameFightPlacementSwapPositionsCancelledMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPlacementSwapPositionsCancelledMessage(input);
}

void GameFightPlacementSwapPositionsCancelledMessage::deserializeAs_GameFightPlacementSwapPositionsCancelledMessage(
        ICustomDataInput &input) {
    this->_requestIdFunc(input);
    this->_cancellerIdFunc(input);
}

void GameFightPlacementSwapPositionsCancelledMessage::_requestIdFunc(ICustomDataInput &input) {
    this->requestId = input.readInt();

}

void GameFightPlacementSwapPositionsCancelledMessage::_cancellerIdFunc(ICustomDataInput &input) {
    this->cancellerId = input.readDouble();

}

