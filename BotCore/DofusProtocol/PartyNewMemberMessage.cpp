#include "PartyNewMemberMessage.h"

void PartyNewMemberMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyNewMemberMessage(input);
}

void PartyNewMemberMessage::deserializeAs_PartyNewMemberMessage(ICustomDataInput &input) {
    PartyUpdateMessage::deserialize(input);
}

