#include "PartyLeaveMessage.h"

void PartyLeaveMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyLeaveMessage(input);
}

void PartyLeaveMessage::deserializeAs_PartyLeaveMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
}

