#include "BreachInvitationOfferMessage.h"

void BreachInvitationOfferMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachInvitationOfferMessage(input);
}

void BreachInvitationOfferMessage::deserializeAs_BreachInvitationOfferMessage(ICustomDataInput &input) {
    this->host.deserialize(input);
    this->_timeLeftBeforeCancelFunc(input);
}

void BreachInvitationOfferMessage::_timeLeftBeforeCancelFunc(ICustomDataInput &input) {
    this->timeLeftBeforeCancel = input.readVarUhInt();

}

