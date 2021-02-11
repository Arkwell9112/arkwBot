#include "FriendSpouseFollowWithCompassRequestMessage.h"

void FriendSpouseFollowWithCompassRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendSpouseFollowWithCompassRequestMessage(input);
}

void FriendSpouseFollowWithCompassRequestMessage::deserializeAs_FriendSpouseFollowWithCompassRequestMessage(
        ICustomDataInput &input) {
    this->_enableFunc(input);
}

void FriendSpouseFollowWithCompassRequestMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

