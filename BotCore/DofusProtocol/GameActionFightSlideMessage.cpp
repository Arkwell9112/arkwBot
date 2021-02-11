#include "GameActionFightSlideMessage.h"

void GameActionFightSlideMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightSlideMessage(input);
}

void GameActionFightSlideMessage::deserializeAs_GameActionFightSlideMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_startCellIdFunc(input);
    this->_endCellIdFunc(input);
}

void GameActionFightSlideMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightSlideMessage::_startCellIdFunc(ICustomDataInput &input) {
    this->startCellId = input.readShort();

}

void GameActionFightSlideMessage::_endCellIdFunc(ICustomDataInput &input) {
    this->endCellId = input.readShort();

}

