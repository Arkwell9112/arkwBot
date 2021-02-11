#include "GameFightPlacementPossiblePositionsMessage.h"

void GameFightPlacementPossiblePositionsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPlacementPossiblePositionsMessage(input);
}

void GameFightPlacementPossiblePositionsMessage::deserializeAs_GameFightPlacementPossiblePositionsMessage(
        ICustomDataInput &input) {
    unsigned int _val1 = 0;
    unsigned int _val2 = 0;
    unsigned int _positionsForChallengersLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _positionsForChallengersLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->positionsForChallengers.push_back(_val1);
    }
    unsigned int _positionsForDefendersLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _positionsForDefendersLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->positionsForDefenders.push_back(_val2);
    }
    this->_teamNumberFunc(input);
}

void GameFightPlacementPossiblePositionsMessage::_positionsForChallengersFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->positionsForChallengers.push_back(_val);
}

void GameFightPlacementPossiblePositionsMessage::_positionsForDefendersFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->positionsForDefenders.push_back(_val);
}

void GameFightPlacementPossiblePositionsMessage::_teamNumberFunc(ICustomDataInput &input) {
    this->teamNumber = input.readByte();

}

