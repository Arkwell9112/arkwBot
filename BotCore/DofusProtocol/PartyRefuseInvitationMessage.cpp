#include "PartyRefuseInvitationMessage.h"

void PartyRefuseInvitationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyRefuseInvitationMessage(input);
}

void PartyRefuseInvitationMessage::deserializeAs_PartyRefuseInvitationMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
}

