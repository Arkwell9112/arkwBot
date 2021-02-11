#include "AllianceMotdSetRequestMessage.h"

void AllianceMotdSetRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceMotdSetRequestMessage(input);
}

void AllianceMotdSetRequestMessage::deserializeAs_AllianceMotdSetRequestMessage(ICustomDataInput &input) {
    SocialNoticeSetRequestMessage::deserialize(input);
    this->_contentFunc(input);
}

void AllianceMotdSetRequestMessage::_contentFunc(ICustomDataInput &input) {
    this->content = input.readUTF();
}

