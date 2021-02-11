#include "PartyRestrictedMessage.h"

void PartyRestrictedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyRestrictedMessage(input);
}

void PartyRestrictedMessage::deserializeAs_PartyRestrictedMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_restrictedFunc(input);
}

void PartyRestrictedMessage::_restrictedFunc(ICustomDataInput &input) {
    this->restricted = input.readBoolean();
}

