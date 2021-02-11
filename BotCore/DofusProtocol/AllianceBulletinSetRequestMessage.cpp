#include "AllianceBulletinSetRequestMessage.h"

void AllianceBulletinSetRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceBulletinSetRequestMessage(input);
}

void AllianceBulletinSetRequestMessage::deserializeAs_AllianceBulletinSetRequestMessage(ICustomDataInput &input) {
    SocialNoticeSetRequestMessage::deserialize(input);
    this->_contentFunc(input);
    this->_notifyMembersFunc(input);
}

void AllianceBulletinSetRequestMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

void AllianceBulletinSetRequestMessage::_notifyMembersFunc(ICustomDataInput &input) {
    this->notifyMembers = input.readBoolean();
}

