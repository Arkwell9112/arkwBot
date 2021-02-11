#include "GuildMemberSetWarnOnConnectionMessage.h"

void GuildMemberSetWarnOnConnectionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMemberSetWarnOnConnectionMessage(input);
}

void
GuildMemberSetWarnOnConnectionMessage::deserializeAs_GuildMemberSetWarnOnConnectionMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void GuildMemberSetWarnOnConnectionMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

