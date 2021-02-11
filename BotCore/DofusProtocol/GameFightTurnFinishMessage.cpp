#include "GameFightTurnFinishMessage.h"

void GameFightTurnFinishMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameFightTurnFinishMessage(input);
}

void GameFightTurnFinishMessage::deserializeAs_GameFightTurnFinishMessage(ICustomDataInput &input) {
    this->_isAfkFunc(input);
}

void GameFightTurnFinishMessage::_isAfkFunc(ICustomDataInput &input) {
    this->isAfk = input.readBoolean();
}

