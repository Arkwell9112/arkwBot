#include "GuildMotdSetErrorMessage.h"

void GuildMotdSetErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMotdSetErrorMessage(input);
}

void GuildMotdSetErrorMessage::deserializeAs_GuildMotdSetErrorMessage(ICustomDataInput &input) {
    SocialNoticeSetErrorMessage::deserialize(input);
}

