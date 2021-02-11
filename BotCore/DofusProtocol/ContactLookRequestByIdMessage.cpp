#include "ContactLookRequestByIdMessage.h"

void ContactLookRequestByIdMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ContactLookRequestByIdMessage(input);
}

void ContactLookRequestByIdMessage::deserializeAs_ContactLookRequestByIdMessage(ICustomDataInput &input) {
    ContactLookRequestMessage::deserialize(input);
    this->_playerIdFunc(input);
}

void ContactLookRequestByIdMessage::_playerIdFunc(ICustomDataInput &input) {
    this->playerId = input.readVarUhLong();

}

