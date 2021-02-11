#include "GameFightPlacementSwapPositionsMessage.h"

void GameFightPlacementSwapPositionsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPlacementSwapPositionsMessage(input);
}

void
GameFightPlacementSwapPositionsMessage::deserializeAs_GameFightPlacementSwapPositionsMessage(ICustomDataInput &input) {
    for (unsigned int _i1 = 0; _i1 < 2; _i1++) {
        this->dispositions.emplace_back();
        this->dispositions.at(_i1).deserialize(input);
    }
}
