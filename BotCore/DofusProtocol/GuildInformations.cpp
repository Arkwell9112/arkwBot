#include "GuildInformations.h"

void GuildInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInformations(input);
}

void GuildInformations::deserializeAs_GuildInformations(ICustomDataInput &input) {
    BasicGuildInformations::deserialize(input);
    this->guildEmblem.deserialize(input);
}

