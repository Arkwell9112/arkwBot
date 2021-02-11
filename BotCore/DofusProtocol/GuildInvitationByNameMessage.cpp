#include "GuildInvitationByNameMessage.h"

void GuildInvitationByNameMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInvitationByNameMessage(input);
}

void GuildInvitationByNameMessage::deserializeAs_GuildInvitationByNameMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
}

void GuildInvitationByNameMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

