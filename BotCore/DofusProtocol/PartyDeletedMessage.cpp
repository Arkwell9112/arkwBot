#include "PartyDeletedMessage.h"

void PartyDeletedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyDeletedMessage(input);
}

void PartyDeletedMessage::deserializeAs_PartyDeletedMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
}

