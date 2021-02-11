#include "GuildMotdSetRequestMessage.h"

void GuildMotdSetRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildMotdSetRequestMessage(input);
}

void GuildMotdSetRequestMessage::deserializeAs_GuildMotdSetRequestMessage(ICustomDataInput &input) {
    SocialNoticeSetRequestMessage::deserialize(input);
    this->_contentFunc(input);
}

void GuildMotdSetRequestMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

