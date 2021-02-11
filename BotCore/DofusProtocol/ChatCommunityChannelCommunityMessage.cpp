#include "ChatCommunityChannelCommunityMessage.h"

void ChatCommunityChannelCommunityMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatCommunityChannelCommunityMessage(input);
}

void ChatCommunityChannelCommunityMessage::deserializeAs_ChatCommunityChannelCommunityMessage(ICustomDataInput &input) {
    this->_communityIdFunc(input);
}

void ChatCommunityChannelCommunityMessage::_communityIdFunc(ICustomDataInput &input) {
    this->communityId = input.readShort();
}

