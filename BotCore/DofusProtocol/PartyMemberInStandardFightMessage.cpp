#include "PartyMemberInStandardFightMessage.h"

void PartyMemberInStandardFightMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyMemberInStandardFightMessage(input);
}

void PartyMemberInStandardFightMessage::deserializeAs_PartyMemberInStandardFightMessage(ICustomDataInput &input) {
    AbstractPartyMemberInFightMessage::deserialize(input);
    this->fightMap.deserialize(input);
}

