#include "InviteInHavenBagMessage.h"

void InviteInHavenBagMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InviteInHavenBagMessage(input);
}

void InviteInHavenBagMessage::deserializeAs_InviteInHavenBagMessage(ICustomDataInput &input) {
    this->guestInformations.deserialize(input);
    this->_acceptFunc(input);
}

void InviteInHavenBagMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

