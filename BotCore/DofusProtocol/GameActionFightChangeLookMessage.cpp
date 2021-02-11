#include "GameActionFightChangeLookMessage.h"

void GameActionFightChangeLookMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightChangeLookMessage(input);
}

void GameActionFightChangeLookMessage::deserializeAs_GameActionFightChangeLookMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
    this->entityLook.deserialize(input);
}

void GameActionFightChangeLookMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

