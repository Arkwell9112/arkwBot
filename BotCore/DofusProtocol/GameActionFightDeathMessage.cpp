#include "GameActionFightDeathMessage.h"

void GameActionFightDeathMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightDeathMessage(input);
}

void GameActionFightDeathMessage::deserializeAs_GameActionFightDeathMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
}

void GameActionFightDeathMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

