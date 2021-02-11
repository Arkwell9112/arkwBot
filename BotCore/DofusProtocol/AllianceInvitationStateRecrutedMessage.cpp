#include "AllianceInvitationStateRecrutedMessage.h"

void AllianceInvitationStateRecrutedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceInvitationStateRecrutedMessage(input);
}

void
AllianceInvitationStateRecrutedMessage::deserializeAs_AllianceInvitationStateRecrutedMessage(ICustomDataInput &input) {
    this->_invitationStateFunc(input);
}

void AllianceInvitationStateRecrutedMessage::_invitationStateFunc(ICustomDataInput &input) {
    this->invitationState = input.readByte();

}

