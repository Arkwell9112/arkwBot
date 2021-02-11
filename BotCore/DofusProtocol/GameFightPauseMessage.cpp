#include "GameFightPauseMessage.h"

void GameFightPauseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightPauseMessage(input);
}

void GameFightPauseMessage::deserializeAs_GameFightPauseMessage(ICustomDataInput &input) {
    this->_isPausedFunc(input);
}

void GameFightPauseMessage::_isPausedFunc(ICustomDataInput &input) {
    this->isPaused = input.readBoolean();
}

