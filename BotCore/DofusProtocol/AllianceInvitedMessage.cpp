#include "AllianceInvitedMessage.h"

void AllianceInvitedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceInvitedMessage(input);
}

void AllianceInvitedMessage::deserializeAs_AllianceInvitedMessage(ICustomDataInput &input) {
    this->_recruterIdFunc(input);
    this->_recruterNameFunc(input);
    this->allianceInfo.deserialize(input);
}

void AllianceInvitedMessage::_recruterIdFunc(ICustomDataInput &input) {
    this->recruterId = input.readVarUhLong();

}

void AllianceInvitedMessage::_recruterNameFunc(ICustomDataInput &input) {
    this->recruterName = input.readUTF();
}

