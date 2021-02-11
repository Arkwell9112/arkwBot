#include "GuildModificationEmblemValidMessage.h"

void GuildModificationEmblemValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildModificationEmblemValidMessage(input);
}

void GuildModificationEmblemValidMessage::deserializeAs_GuildModificationEmblemValidMessage(ICustomDataInput &input) {
    this->guildEmblem.deserialize(input);
}

