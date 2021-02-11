#include "GameFightNewRoundMessage.h"

void GameFightNewRoundMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightNewRoundMessage(input);
}

void GameFightNewRoundMessage::deserializeAs_GameFightNewRoundMessage(ICustomDataInput &input) {
    this->_roundNumberFunc(input);
}

void GameFightNewRoundMessage::_roundNumberFunc(ICustomDataInput &input) {
    this->roundNumber = input.readVarUhInt();

}

