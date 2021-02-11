#include "GameActionFightCarryCharacterMessage.h"

void GameActionFightCarryCharacterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightCarryCharacterMessage(input);
}

void GameActionFightCarryCharacterMessage::deserializeAs_GameActionFightCarryCharacterMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_cellIdFunc(input);
}

void GameActionFightCarryCharacterMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightCarryCharacterMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readShort();

}

