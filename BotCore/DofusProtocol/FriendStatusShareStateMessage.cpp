#include "FriendStatusShareStateMessage.h"

void FriendStatusShareStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendStatusShareStateMessage(input);
}

void FriendStatusShareStateMessage::deserializeAs_FriendStatusShareStateMessage(ICustomDataInput &input) {
    this->_shareFunc(input);
}

void FriendStatusShareStateMessage::_shareFunc(ICustomDataInput &input) {
    this->share = input.readBoolean();
}

