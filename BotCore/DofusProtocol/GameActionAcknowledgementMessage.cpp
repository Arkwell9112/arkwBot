#include "GameActionAcknowledgementMessage.h"

void GameActionAcknowledgementMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameActionAcknowledgementMessage(input);
}

void GameActionAcknowledgementMessage::deserializeAs_GameActionAcknowledgementMessage(ICustomDataInput &input) {
    this->_validFunc(input);
    this->_actionIdFunc(input);
}

void GameActionAcknowledgementMessage::_validFunc(ICustomDataInput &input) {
    this->valid = input.readBoolean();
}

void GameActionAcknowledgementMessage::_actionIdFunc(ICustomDataInput &input) {
    this->actionId = input.readByte();
}

