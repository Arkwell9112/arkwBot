#include "GuildMemberWarnOnConnectionStateMessage.h"

void GuildMemberWarnOnConnectionStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMemberWarnOnConnectionStateMessage(input);
}

void GuildMemberWarnOnConnectionStateMessage::deserializeAs_GuildMemberWarnOnConnectionStateMessage(
        ICustomDataInput &input) {
    this->_enableFunc(input);
}

void GuildMemberWarnOnConnectionStateMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

