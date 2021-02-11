#include "GameFightTurnReadyRequestMessage.h"

void GameFightTurnReadyRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightTurnReadyRequestMessage(input);
}

void GameFightTurnReadyRequestMessage::deserializeAs_GameFightTurnReadyRequestMessage(ICustomDataInput &input) {
    this->_idFunc(input);
}

void GameFightTurnReadyRequestMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

