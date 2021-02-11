#include "GuildInformationsMemberUpdateMessage.h"

void GuildInformationsMemberUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInformationsMemberUpdateMessage(input);
}

void GuildInformationsMemberUpdateMessage::deserializeAs_GuildInformationsMemberUpdateMessage(ICustomDataInput &input) {
    this->member.deserialize(input);
}

