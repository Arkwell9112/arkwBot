#include "PartyInvitationArenaRequestMessage.h"

void PartyInvitationArenaRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationArenaRequestMessage(input);
}

void PartyInvitationArenaRequestMessage::deserializeAs_PartyInvitationArenaRequestMessage(ICustomDataInput &input) {
    PartyInvitationRequestMessage::deserialize(input);
}

