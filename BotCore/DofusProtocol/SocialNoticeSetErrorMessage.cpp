#include "SocialNoticeSetErrorMessage.h"

void SocialNoticeSetErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SocialNoticeSetErrorMessage(input);
}

void SocialNoticeSetErrorMessage::deserializeAs_SocialNoticeSetErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void SocialNoticeSetErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

