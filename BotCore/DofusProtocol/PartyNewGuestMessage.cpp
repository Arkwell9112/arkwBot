#include "PartyNewGuestMessage.h"

void PartyNewGuestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyNewGuestMessage(input);
}

void PartyNewGuestMessage::deserializeAs_PartyNewGuestMessage(ICustomDataInput &input) {
    AbstractPartyEventMessage::deserialize(input);
    this->guest.deserialize(input);
}

