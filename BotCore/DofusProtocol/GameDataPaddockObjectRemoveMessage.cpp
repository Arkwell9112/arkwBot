#include "GameDataPaddockObjectRemoveMessage.h"

void GameDataPaddockObjectRemoveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameDataPaddockObjectRemoveMessage(input);
}

void GameDataPaddockObjectRemoveMessage::deserializeAs_GameDataPaddockObjectRemoveMessage(ICustomDataInput &input) {
    this->_cellIdFunc(input);
}

void GameDataPaddockObjectRemoveMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readVarUhShort();

}

