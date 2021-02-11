#include "BreachInvitationResponseMessage.h"

void BreachInvitationResponseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachInvitationResponseMessage(input);
}

void BreachInvitationResponseMessage::deserializeAs_BreachInvitationResponseMessage(ICustomDataInput &input) {
    this->guest.deserialize(input);
    this->_acceptFunc(input);
}

void BreachInvitationResponseMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

