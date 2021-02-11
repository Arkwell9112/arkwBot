#include "PartyLeaveRequestMessage.h"

void PartyLeaveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyLeaveRequestMessage(input);
}

void PartyLeaveRequestMessage::deserializeAs_PartyLeaveRequestMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
}

