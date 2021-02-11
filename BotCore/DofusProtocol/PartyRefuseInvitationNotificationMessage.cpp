#include "PartyRefuseInvitationNotificationMessage.h"

void PartyRefuseInvitationNotificationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyRefuseInvitationNotificationMessage(input);
}

void PartyRefuseInvitationNotificationMessage::deserializeAs_PartyRefuseInvitationNotificationMessage(
        ICustomDataInput &input) {
    AbstractPartyEventMessage::deserialize(input);
    this->_guestIdFunc(input);
}

void PartyRefuseInvitationNotificationMessage::_guestIdFunc(ICustomDataInput &input) {
    this->guestId = input.readVarUhLong();

}

