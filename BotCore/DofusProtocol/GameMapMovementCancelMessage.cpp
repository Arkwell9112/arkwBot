#include "GameMapMovementCancelMessage.h"

void GameMapMovementCancelMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameMapMovementCancelMessage(input);
}

void GameMapMovementCancelMessage::deserializeAs_GameMapMovementCancelMessage(ICustomDataInput &input) {
    this->_cellIdFunc(input);
}

void GameMapMovementCancelMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

