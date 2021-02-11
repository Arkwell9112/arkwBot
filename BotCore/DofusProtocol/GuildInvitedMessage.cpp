#include "GuildInvitedMessage.h"

void GuildInvitedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildInvitedMessage(input);
}

void GuildInvitedMessage::deserializeAs_GuildInvitedMessage(ICustomDataInput &input) {
    this->_recruterIdFunc(input);
    this->_recruterNameFunc(input);
    this->guildInfo.deserialize(input);
}

void GuildInvitedMessage::_recruterIdFunc(ICustomDataInput &input) {
    this->recruterId = input.readVarUhLong();

}

void GuildInvitedMessage::_recruterNameFunc(ICustomDataInput &input) {
    this->recruterName = input.readUTF();
}

