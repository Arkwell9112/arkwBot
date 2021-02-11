#include "GameFightPlacementPositionRequestMessage.h"

void GameFightPlacementPositionRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPlacementPositionRequestMessage(input);
}

void GameFightPlacementPositionRequestMessage::deserializeAs_GameFightPlacementPositionRequestMessage(
        ICustomDataInput &input) {
    this->_cellIdFunc(input);
}

void GameFightPlacementPositionRequestMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

