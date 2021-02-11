#include "AllianceMembershipMessage.h"

void AllianceMembershipMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceMembershipMessage(input);
}

void AllianceMembershipMessage::deserializeAs_AllianceMembershipMessage(ICustomDataInput &input) {
    AllianceJoinedMessage::deserialize(input);
}

