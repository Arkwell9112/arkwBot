#include "PartyFollowThisMemberRequestMessage.h"

void PartyFollowThisMemberRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PartyFollowThisMemberRequestMessage(input);
}

void PartyFollowThisMemberRequestMessage::deserializeAs_PartyFollowThisMemberRequestMessage(ICustomDataInput &input) {
    PartyFollowMemberRequestMessage::deserialize(input);
    this->_enabledFunc(input);
}

void PartyFollowThisMemberRequestMessage::_enabledFunc(ICustomDataInput &input) {
    this->enabled = input.readBoolean();
}

