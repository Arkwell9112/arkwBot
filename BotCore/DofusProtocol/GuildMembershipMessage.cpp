#include "GuildMembershipMessage.h"

void GuildMembershipMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMembershipMessage(input);
}

void GuildMembershipMessage::deserializeAs_GuildMembershipMessage(ICustomDataInput &input) {
    GuildJoinedMessage::deserialize(input);
}

