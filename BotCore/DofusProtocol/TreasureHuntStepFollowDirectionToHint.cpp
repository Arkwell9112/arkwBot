#include "TreasureHuntStepFollowDirectionToHint.h"

void TreasureHuntStepFollowDirectionToHint::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TreasureHuntStepFollowDirectionToHint(input);
}

void
TreasureHuntStepFollowDirectionToHint::deserializeAs_TreasureHuntStepFollowDirectionToHint(ICustomDataInput &input) {
    TreasureHuntStep::deserialize(input);
    this->_directionFunc(input);
    this->_npcIdFunc(input);
}

void TreasureHuntStepFollowDirectionToHint::_directionFunc(ICustomDataInput &input) {
    this->direction = input.readByte();

}

void TreasureHuntStepFollowDirectionToHint::_npcIdFunc(ICustomDataInput &input) {
    this->npcId = input.readVarUhShort();

}

