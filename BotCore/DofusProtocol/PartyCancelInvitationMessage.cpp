#include "PartyCancelInvitationMessage.h"

void PartyCancelInvitationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyCancelInvitationMessage(input);
}

void PartyCancelInvitationMessage::deserializeAs_PartyCancelInvitationMessage(ICustomDataInput &input) {
    AbstractPartyMessage::deserialize(input);
    this->_guestIdFunc(input);
}

void PartyCancelInvitationMessage::_guestIdFunc(ICustomDataInput &input) {
    this->guestId = input.readVarUhLong();

}

