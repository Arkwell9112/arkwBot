#include "BreachInvitationCloseMessage.h"

void BreachInvitationCloseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachInvitationCloseMessage(input);
}

void BreachInvitationCloseMessage::deserializeAs_BreachInvitationCloseMessage(ICustomDataInput &input) {
    this->host.deserialize(input);
}

