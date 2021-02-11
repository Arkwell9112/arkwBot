#include "GameActionFightDispellMessage.h"

void GameActionFightDispellMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightDispellMessage(input);
}

void GameActionFightDispellMessage::deserializeAs_GameActionFightDispellMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->_verboseCastFunc(input);
}

void GameActionFightDispellMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

void GameActionFightDispellMessage::_verboseCastFunc(ICustomDataInput &input) {
    this->verboseCast = input.readBoolean();
}

