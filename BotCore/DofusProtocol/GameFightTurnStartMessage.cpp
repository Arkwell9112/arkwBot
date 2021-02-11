#include "GameFightTurnStartMessage.h"

void GameFightTurnStartMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightTurnStartMessage(input);
}

void GameFightTurnStartMessage::deserializeAs_GameFightTurnStartMessage(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_waitTimeFunc(input);
}

void GameFightTurnStartMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readDouble();

}

void GameFightTurnStartMessage::_waitTimeFunc(ICustomDataInput &input) {
    this->waitTime = input.readVarUhInt();

}

