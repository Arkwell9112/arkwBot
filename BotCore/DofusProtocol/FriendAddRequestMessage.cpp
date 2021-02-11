#include "FriendAddRequestMessage.h"

void FriendAddRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendAddRequestMessage(input);
}

void FriendAddRequestMessage::deserializeAs_FriendAddRequestMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
}

void FriendAddRequestMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

