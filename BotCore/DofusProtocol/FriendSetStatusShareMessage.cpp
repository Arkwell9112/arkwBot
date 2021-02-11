#include "FriendSetStatusShareMessage.h"

void FriendSetStatusShareMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendSetStatusShareMessage(input);
}

void FriendSetStatusShareMessage::deserializeAs_FriendSetStatusShareMessage(ICustomDataInput &input) {
    this->_shareFunc(input);
}

void FriendSetStatusShareMessage::_shareFunc(ICustomDataInput &input) {
    this->share = input.readBoolean();
}

