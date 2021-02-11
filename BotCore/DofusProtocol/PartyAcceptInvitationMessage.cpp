#include "PartyAcceptInvitationMessage.h"

void PartyAcceptInvitationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyAcceptInvitationMessage(input);
}

void PartyAcceptInvitationMessage::deserializeAs_PartyAcceptInvitationMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
}

