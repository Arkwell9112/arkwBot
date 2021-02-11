#include "GameFightSpectatePlayerRequestMessage.h"

void GameFightSpectatePlayerRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightSpectatePlayerRequestMessage(input);
}

void
GameFightSpectatePlayerRequestMessage::deserializeAs_GameFightSpectatePlayerRequestMessage(ICustomDataInput &input) {
    this->_playerIdFunc(input);
}

void GameFightSpectatePlayerRequestMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

