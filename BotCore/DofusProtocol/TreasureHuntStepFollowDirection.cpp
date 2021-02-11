#include "TreasureHuntStepFollowDirection.h"

void TreasureHuntStepFollowDirection::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntStepFollowDirection(input);
}

void TreasureHuntStepFollowDirection::deserializeAs_TreasureHuntStepFollowDirection(ICustomDataInput &input) {
    TreasureHuntStep::deserialize(input);
    this->_directionFunc(input);
    this->_mapCountFunc(input);
}

void TreasureHuntStepFollowDirection::_directionFunc(ICustomDataInput &input) {
    this->direction = input.readByte();

}

void TreasureHuntStepFollowDirection::_mapCountFunc(ICustomDataInput &input) {
    this->mapCount = input.readVarUhShort();

}

