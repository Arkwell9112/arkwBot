#include "FriendDeleteResultMessage.h"

void FriendDeleteResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendDeleteResultMessage(input);
}

void FriendDeleteResultMessage::deserializeAs_FriendDeleteResultMessage(ICustomDataInput &input) {
    this->_successFunc(input);
    this->_nameFunc(input);
}

void FriendDeleteResultMessage::_successFunc(ICustomDataInput &input) {
    this->success = input.readBoolean();
}

void FriendDeleteResultMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

