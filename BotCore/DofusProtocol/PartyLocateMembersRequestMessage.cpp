#include "PartyLocateMembersRequestMessage.h"

void PartyLocateMembersRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyLocateMembersRequestMessage(input);
}

void PartyLocateMembersRequestMessage::deserializeAs_PartyLocateMembersRequestMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
}

