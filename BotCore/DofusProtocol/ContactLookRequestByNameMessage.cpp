#include "ContactLookRequestByNameMessage.h"

void ContactLookRequestByNameMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ContactLookRequestByNameMessage(input);
}

void ContactLookRequestByNameMessage::deserializeAs_ContactLookRequestByNameMessage(ICustomDataInput &input) {
    ContactLookRequestMessage::deserialize(input);
    this->_playerNameFunc(input);
}

void ContactLookRequestByNameMessage::_playerNameFunc(ICustomDataInput &input) {
    this->playerName = input.readUTF();
}

