#include "TreasureHuntStepFollowDirectionToPOI.h"

void TreasureHuntStepFollowDirectionToPOI::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntStepFollowDirectionToPOI(input);
}

void TreasureHuntStepFollowDirectionToPOI::deserializeAs_TreasureHuntStepFollowDirectionToPOI(ICustomDataInput &input) {
    TreasureHuntStep::deserialize(input);
    this->_directionFunc(input);
    this->_poiLabelIdFunc(input);
}

void TreasureHuntStepFollowDirectionToPOI::_directionFunc(ICustomDataInput &input) {
    this->direction = input.readByte();

}

void TreasureHuntStepFollowDirectionToPOI::_poiLabelIdFunc(ICustomDataInput &input) {
    this->poiLabelId = input.readVarUhShort();

}

