#include "AllianceInvitationAnswerMessage.h"

void AllianceInvitationAnswerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceInvitationAnswerMessage(input);
}

void AllianceInvitationAnswerMessage::deserializeAs_AllianceInvitationAnswerMessage(ICustomDataInput &input) {
    this->_acceptFunc(input);
}

void AllianceInvitationAnswerMessage::_acceptFunc(ICustomDataInput &input) {
    this->accept = input.readBoolean();
}

