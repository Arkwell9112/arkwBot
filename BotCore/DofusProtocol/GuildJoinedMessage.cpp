#include "GuildJoinedMessage.h"

void GuildJoinedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildJoinedMessage(input);
}

void GuildJoinedMessage::deserializeAs_GuildJoinedMessage(ICustomDataInput &input) {
    this->guildInfo.deserialize(input);
    this->_memberRightsFunc(input);
}

void GuildJoinedMessage::_memberRightsFunc(ICustomDataInput &input) {
    this->memberRights = input.readVarUhInt();

}

