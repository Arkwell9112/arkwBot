#include "SocialNoticeMessage.h"

void SocialNoticeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SocialNoticeMessage(input);
}

void SocialNoticeMessage::deserializeAs_SocialNoticeMessage(ICustomDataInput &input) {
    this->_contentFunc(input);
    this->_timestampFunc(input);
    this->_memberIdFunc(input);
    this->_memberNameFunc(input);
}

void SocialNoticeMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

void SocialNoticeMessage::_timestampFunc(ICustomDataInput &input) {
    this->timestamp = input.readInt();

}

void SocialNoticeMessage::_memberIdFunc(ICustomDataInput &input) {
    this->memberId = input.readVarUhLong();

}

void SocialNoticeMessage::_memberNameFunc(ICustomDataInput &input) {
    this->memberName = input.readUTF();
}

