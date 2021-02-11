#include "GameFightReadyMessage.h"

void GameFightReadyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightReadyMessage(input);
}

void GameFightReadyMessage::deserializeAs_GameFightReadyMessage(ICustomDataInput &input) {
    this->_isReadyFunc(input);
}

void GameFightReadyMessage::_isReadyFunc(ICustomDataInput &input) {
    this->isReady = input.readBoolean();
}

