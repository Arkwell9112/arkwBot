#include "GameFightPlacementSwapPositionsAcceptMessage.h"

void GameFightPlacementSwapPositionsAcceptMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPlacementSwapPositionsAcceptMessage(input);
}

void GameFightPlacementSwapPositionsAcceptMessage::deserializeAs_GameFightPlacementSwapPositionsAcceptMessage(
        ICustomDataInput &input) {
    this->_requestIdFunc(input);
}

void GameFightPlacementSwapPositionsAcceptMessage::_requestIdFunc(ICustomDataInput &input) {
    this->requestId = input.readInt();

}

