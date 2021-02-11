#include "PartyInvitationCancelledForGuestMessage.h"

void PartyInvitationCancelledForGuestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationCancelledForGuestMessage(input);
}

void PartyInvitationCancelledForGuestMessage::deserializeAs_PartyInvitationCancelledForGuestMessage(
        ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_cancelerIdFunc(input);
}

void PartyInvitationCancelledForGuestMessage::_cancelerIdFunc(ICustomDataInput &input) {
    this->cancelerId = input.readVarUhLong();

}

