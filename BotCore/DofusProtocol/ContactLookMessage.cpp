#include "ContactLookMessage.h"

void ContactLookMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ContactLookMessage(input);
}

void ContactLookMessage::deserializeAs_ContactLookMessage(ICustomDataInput &input) {
    this->_requestIdFunc(input);
    this->_playerNameFunc(input);
    this->_playerIdFunc(input);
    this->look.deserialize(input);
}

void ContactLookMessage::_requestIdFunc(ICustomDataInput &input) {
    this->requestId = input.readVarUhInt();

}

void ContactLookMessage::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

void ContactLookMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

