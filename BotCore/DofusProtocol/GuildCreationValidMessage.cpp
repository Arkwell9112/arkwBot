#include "GuildCreationValidMessage.h"

void GuildCreationValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildCreationValidMessage(input);
}

void GuildCreationValidMessage::deserializeAs_GuildCreationValidMessage(ICustomDataInput &input) {
    this->_guildNameFunc(input);
    this->guildEmblem.deserialize(input);
}

void GuildCreationValidMessage::_guildNameFunc(ICustomDataInput &input) {
    this->guildName = input.readUTF();
}

