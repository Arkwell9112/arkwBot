#include "InviteInHavenBagClosedMessage.h"

void InviteInHavenBagClosedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InviteInHavenBagClosedMessage(input);
}

void InviteInHavenBagClosedMessage::deserializeAs_InviteInHavenBagClosedMessage(ICustomDataInput &input) {
    this->hostInformations.deserialize(input);
}

