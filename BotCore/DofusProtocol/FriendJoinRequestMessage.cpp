#include "FriendJoinRequestMessage.h"

void FriendJoinRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendJoinRequestMessage(input);
}

void FriendJoinRequestMessage::deserializeAs_FriendJoinRequestMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
}

void FriendJoinRequestMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

