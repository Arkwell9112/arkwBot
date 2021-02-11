#include "GameFightHumanReadyStateMessage.h"

void GameFightHumanReadyStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightHumanReadyStateMessage(input);
}

void GameFightHumanReadyStateMessage::deserializeAs_GameFightHumanReadyStateMessage(ICustomDataInput &input) {
    this->_characterIdFunc(input);
    this->_isReadyFunc(input);
}

void GameFightHumanReadyStateMessage::_characterIdFunc(ICustomDataInput &input) {
    this->characterId = input.readVarUhLong();

}

void GameFightHumanReadyStateMessage::_isReadyFunc(ICustomDataInput &input) {
    this->isReady = input.readBoolean();
}

