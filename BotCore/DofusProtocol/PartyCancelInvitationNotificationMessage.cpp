#include "PartyCancelInvitationNotificationMessage.h"

void PartyCancelInvitationNotificationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyCancelInvitationNotificationMessage(input);
}

void PartyCancelInvitationNotificationMessage::deserializeAs_PartyCancelInvitationNotificationMessage(
        ICustomDataInput &input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_cancelerIdFunc(input);
    this->_guestIdFunc(input);
}

void PartyCancelInvitationNotificationMessage::_cancelerIdFunc(ICustomDataInput &input) {
    this->cancelerId = input.readVarUhLong();

}

void PartyCancelInvitationNotificationMessage::_guestIdFunc(ICustomDataInput &input) {
    this->guestId = input.readVarUhLong();

}

