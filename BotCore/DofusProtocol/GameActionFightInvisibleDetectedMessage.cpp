#include "GameActionFightInvisibleDetectedMessage.h"

void GameActionFightInvisibleDetectedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightInvisibleDetectedMessage(input);
}

void GameActionFightInvisibleDetectedMessage::deserializeAs_GameActionFightInvisibleDetectedMessage(
        ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_cellIdFunc(input);
}

void GameActionFightInvisibleDetectedMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightInvisibleDetectedMessage::_cellIdFunc(ICustomDataInput &input) {
    this->cellId = input.readShort();

}

