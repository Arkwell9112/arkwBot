#include "GuildModificationNameValidMessage.h"

void GuildModificationNameValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildModificationNameValidMessage(input);
}

void GuildModificationNameValidMessage::deserializeAs_GuildModificationNameValidMessage(ICustomDataInput &input) {
    this->_guildNameFunc(input);
}

void GuildModificationNameValidMessage::_guildNameFunc(ICustomDataInput &input) {
    this->guildName = input.readUTF();
}

