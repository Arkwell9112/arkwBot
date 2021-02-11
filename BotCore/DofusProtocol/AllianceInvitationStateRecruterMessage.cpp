#include "AllianceInvitationStateRecruterMessage.h"

void AllianceInvitationStateRecruterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceInvitationStateRecruterMessage(input);
}

void
AllianceInvitationStateRecruterMessage::deserializeAs_AllianceInvitationStateRecruterMessage(ICustomDataInput &input) {
    this->_recrutedNameFunc(input);
    this->_invitationStateFunc(input);
}

void AllianceInvitationStateRecruterMessage::_recrutedNameFunc(ICustomDataInput &input) {
    this->recrutedName = input.readUTF();
}

void AllianceInvitationStateRecruterMessage::_invitationStateFunc(ICustomDataInput &input) {
    this->invitationState = input.readByte();

}

