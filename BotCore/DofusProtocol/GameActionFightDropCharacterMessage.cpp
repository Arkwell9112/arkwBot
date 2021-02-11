#include "GameActionFightDropCharacterMessage.h"

void GameActionFightDropCharacterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightDropCharacterMessage(input);
}

void GameActionFightDropCharacterMessage::deserializeAs_GameActionFightDropCharacterMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_cellIdFunc(input);
}

void GameActionFightDropCharacterMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightDropCharacterMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readShort();

}

