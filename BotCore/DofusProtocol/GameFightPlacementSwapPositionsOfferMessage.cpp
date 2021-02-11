#include "GameFightPlacementSwapPositionsOfferMessage.h"

void GameFightPlacementSwapPositionsOfferMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPlacementSwapPositionsOfferMessage(input);
}

void GameFightPlacementSwapPositionsOfferMessage::deserializeAs_GameFightPlacementSwapPositionsOfferMessage(
        ICustomDataInput &input) {
    this->_requestIdFunc(input);
    this->_requesterIdFunc(input);
    this->_requesterCellIdFunc(input);
    this->_requestedIdFunc(input);
    this->_requestedCellIdFunc(input);
}

void GameFightPlacementSwapPositionsOfferMessage::_requestIdFunc(ICustomDataInput &input) {
    this->requestId = input.readInt();

}

void GameFightPlacementSwapPositionsOfferMessage::_requesterIdFunc(ICustomDataInput &input) {
    this->requesterId = input.readDouble();

}

void GameFightPlacementSwapPositionsOfferMessage::_requesterCellIdFunc(ICustomDataInput &input) {
    this->requesterCellId = input.readVarUhShort();

}

void GameFightPlacementSwapPositionsOfferMessage::_requestedIdFunc(ICustomDataInput &input) {
    this->requestedId = input.readDouble();

}

void GameFightPlacementSwapPositionsOfferMessage::_requestedCellIdFunc(ICustomDataInput &input) {
    this->requestedCellId = input.readVarUhShort();

}

