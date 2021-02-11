#include "ChatCommunityChannelSetCommunityRequestMessage.h"

void ChatCommunityChannelSetCommunityRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChatCommunityChannelSetCommunityRequestMessage(input);
}

void ChatCommunityChannelSetCommunityRequestMessage::deserializeAs_ChatCommunityChannelSetCommunityRequestMessage(
        ICustomDataInput &input) {
    this->_communityIdFunc(input);
}

void ChatCommunityChannelSetCommunityRequestMessage::_communityIdFunc(ICustomDataInput &input) {
    this->communityId = input.readShort();
}

