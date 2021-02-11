#include "GameActionFightKillMessage.h"

void GameActionFightKillMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionFightKillMessage(input);
}

void GameActionFightKillMessage::deserializeAs_GameActionFightKillMessage(ICustomDataInput &input) {
    AbstractGameActionMessage::deserialize(input);
    this->_targetIdFunc(input);
}

void GameActionFightKillMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readDouble();

}

