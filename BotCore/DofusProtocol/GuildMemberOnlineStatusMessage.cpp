#include "GuildMemberOnlineStatusMessage.h"

void GuildMemberOnlineStatusMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMemberOnlineStatusMessage(input);
}

void GuildMemberOnlineStatusMessage::deserializeAs_GuildMemberOnlineStatusMessage(ICustomDataInput &input) {
    this->_memberIdFunc(input);
    this->_onlineFunc(input);
}

void GuildMemberOnlineStatusMessage::_memberIdFunc(ICustomDataInput &input) {
    this->memberId = input.readVarUhLong();

}

void GuildMemberOnlineStatusMessage::_onlineFunc(ICustomDataInput &input) {
    this->online = input.readBoolean();
}

