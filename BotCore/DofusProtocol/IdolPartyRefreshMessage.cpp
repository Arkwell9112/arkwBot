#include "IdolPartyRefreshMessage.h"

void IdolPartyRefreshMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolPartyRefreshMessage(input);
}

void IdolPartyRefreshMessage::deserializeAs_IdolPartyRefreshMessage(ICustomDataInput &input) {
    this->partyIdol.deserialize(input);
}

