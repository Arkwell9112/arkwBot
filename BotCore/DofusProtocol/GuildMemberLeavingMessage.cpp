#include "GuildMemberLeavingMessage.h"

void GuildMemberLeavingMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMemberLeavingMessage(input);
}

void GuildMemberLeavingMessage::deserializeAs_GuildMemberLeavingMessage(ICustomDataInput &input) {
    this->_kickedFunc(input);
    this->_memberIdFunc(input);
}

void GuildMemberLeavingMessage::_kickedFunc(ICustomDataInput &input) {
    this->kicked = input.readBoolean();
}

void GuildMemberLeavingMessage::_memberIdFunc(ICustomDataInput &input) {
    this->memberId = input.readVarUhLong();

}

