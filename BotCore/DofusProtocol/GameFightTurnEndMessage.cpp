#include "GameFightTurnEndMessage.h"

void GameFightTurnEndMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightTurnEndMessage(input);
}

void GameFightTurnEndMessage::deserializeAs_GameFightTurnEndMessage(ICustomDataInput &input) {
    this->_idFunc(input);
}

void GameFightTurnEndMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

