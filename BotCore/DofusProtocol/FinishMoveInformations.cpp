#include "FinishMoveInformations.h"

void FinishMoveInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FinishMoveInformations(input);
}

void FinishMoveInformations::deserializeAs_FinishMoveInformations(ICustomDataInput &input) {
    this->_finishMoveIdFunc(input);
    this->_finishMoveStateFunc(input);
}

void FinishMoveInformations::_finishMoveIdFunc(ICustomDataInput &input) {
    this->finishMoveId = input.readInt();

}

void FinishMoveInformations::_finishMoveStateFunc(ICustomDataInput &input) {
    this->finishMoveState = input.readBoolean();
}

