#include "FriendSetWarnOnConnectionMessage.h"

void FriendSetWarnOnConnectionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendSetWarnOnConnectionMessage(input);
}

void FriendSetWarnOnConnectionMessage::deserializeAs_FriendSetWarnOnConnectionMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void FriendSetWarnOnConnectionMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

