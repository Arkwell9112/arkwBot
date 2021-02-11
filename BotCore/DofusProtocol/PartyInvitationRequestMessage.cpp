#include "PartyInvitationRequestMessage.h"

void PartyInvitationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyInvitationRequestMessage(input);
}

void PartyInvitationRequestMessage::deserializeAs_PartyInvitationRequestMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
}

void PartyInvitationRequestMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

