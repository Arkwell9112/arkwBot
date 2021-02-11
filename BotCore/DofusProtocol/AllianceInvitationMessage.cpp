#include "AllianceInvitationMessage.h"

void AllianceInvitationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceInvitationMessage(input);
}

void AllianceInvitationMessage::deserializeAs_AllianceInvitationMessage(ICustomDataInput &input) {
    this->_targetIdFunc(input);
}

void AllianceInvitationMessage::_targetIdFunc(ICustomDataInput &input) {
    this->targetId = input.readVarUhLong();

}

