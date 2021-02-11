#include "PartyInvitationDetailsRequestMessage.h"

void PartyInvitationDetailsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationDetailsRequestMessage(input);
}

void PartyInvitationDetailsRequestMessage::deserializeAs_PartyInvitationDetailsRequestMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
}

