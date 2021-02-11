#include "FinishMoveSetRequestMessage.h"

void FinishMoveSetRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FinishMoveSetRequestMessage(input);
}

void FinishMoveSetRequestMessage::deserializeAs_FinishMoveSetRequestMessage(ICustomDataInput &input) {
    this->_finishMoveIdFunc(input);
    this->_finishMoveStateFunc(input);
}

void FinishMoveSetRequestMessage::_finishMoveIdFunc(ICustomDataInput &input) {
    this->finishMoveId = input.readInt();

}

void FinishMoveSetRequestMessage::_finishMoveStateFunc(ICustomDataInput &input) {
    this->finishMoveState = input.readBoolean();
}

