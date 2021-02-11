#include "InviteInHavenBagOfferMessage.h"

void InviteInHavenBagOfferMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_InviteInHavenBagOfferMessage(input);
}

void InviteInHavenBagOfferMessage::deserializeAs_InviteInHavenBagOfferMessage(ICustomDataInput &input) {
    this->hostInformations.deserialize(input);
    this->_timeLeftBeforeCancelFunc(input);
}

void InviteInHavenBagOfferMessage::_timeLeftBeforeCancelFunc(ICustomDataInput &input) {
    this->timeLeftBeforeCancel = input.readVarInt();
}

