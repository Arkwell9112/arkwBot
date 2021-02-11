#include "GameFightTurnReadyMessage.h"

void GameFightTurnReadyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightTurnReadyMessage(input);
}

void GameFightTurnReadyMessage::deserializeAs_GameFightTurnReadyMessage(ICustomDataInput &input) {
    this->_isReadyFunc(input);
}

void GameFightTurnReadyMessage::_isReadyFunc(ICustomDataInput &input) {
    this->isReady = input.readBoolean();
}

