#include "GuildModificationValidMessage.h"

void GuildModificationValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildModificationValidMessage(input);
}

void GuildModificationValidMessage::deserializeAs_GuildModificationValidMessage(ICustomDataInput &input) {
    this->_guildNameFunc(input);
    this->guildEmblem.deserialize(input);
}

void GuildModificationValidMessage::_guildNameFunc(ICustomDataInput &input) {
    this->guildName = input.readUTF();
}

