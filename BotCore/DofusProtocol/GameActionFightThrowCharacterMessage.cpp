#include "GameActionFightThrowCharacterMessage.h"

void GameActionFightThrowCharacterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightThrowCharacterMessage(input);
}

void GameActionFightThrowCharacterMessage::deserializeAs_GameActionFightThrowCharacterMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_cellIdFunc(input);
}

void GameActionFightThrowCharacterMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightThrowCharacterMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readShort();

}

