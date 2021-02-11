#include "GameActionFightInvisibilityMessage.h"

void GameActionFightInvisibilityMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightInvisibilityMessage(input);
}

void GameActionFightInvisibilityMessage::deserializeAs_GameActionFightInvisibilityMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_stateFunc(input);
}

void GameActionFightInvisibilityMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightInvisibilityMessage::_stateFunc(ICustomDataInput &input) {
    this->state = input.readByte();

}

