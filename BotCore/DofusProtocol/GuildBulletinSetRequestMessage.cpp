#include "GuildBulletinSetRequestMessage.h"

void GuildBulletinSetRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GuildBulletinSetRequestMessage(input);
}

void GuildBulletinSetRequestMessage::deserializeAs_GuildBulletinSetRequestMessage(ICustomDataInput &input) {
    SocialNoticeSetRequestMessage::deserialize(input);
    this->_contentFunc(input);
    this->_notifyMembersFunc(input);
}

void GuildBulletinSetRequestMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

void GuildBulletinSetRequestMessage::_notifyMembersFunc(ICustomDataInput &input) {
    this->notifyMembers = input.readBoolean();
}

