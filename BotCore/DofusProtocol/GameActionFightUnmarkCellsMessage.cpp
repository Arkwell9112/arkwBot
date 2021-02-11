#include "GameActionFightUnmarkCellsMessage.h"

void GameActionFightUnmarkCellsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightUnmarkCellsMessage(input);
}

void GameActionFightUnmarkCellsMessage::deserializeAs_GameActionFightUnmarkCellsMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_markIdFunc(input);
}

void GameActionFightUnmarkCellsMessage::_markIdFunc(ICustomDataInput &input) {
    this->markId = input.readShort();
}

