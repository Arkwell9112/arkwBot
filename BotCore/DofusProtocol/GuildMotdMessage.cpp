#include "GuildMotdMessage.h"

void GuildMotdMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMotdMessage(input);
}

void GuildMotdMessage::deserializeAs_GuildMotdMessage(ICustomDataInput &input) {
    SocialNoticeMessage::deserialize(input);
}

