#include "GameFightTurnResumeMessage.h"

void GameFightTurnResumeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightTurnResumeMessage(input);
}

void GameFightTurnResumeMessage::deserializeAs_GameFightTurnResumeMessage(ICustomDataInput &input) {
    GameFightTurnStartMessage::deserialize(input);
    this->_remainingTimeFunc(input);
}

void GameFightTurnResumeMessage::_remainingTimeFunc(ICustomDataInput &input) {
    this->remainingTime = input.readVarUhInt();

}

