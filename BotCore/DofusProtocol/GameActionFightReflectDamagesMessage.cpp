#include "GameActionFightReflectDamagesMessage.h"

void GameActionFightReflectDamagesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightReflectDamagesMessage(input);
}

void GameActionFightReflectDamagesMessage::deserializeAs_GameActionFightReflectDamagesMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
}

void GameActionFightReflectDamagesMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

