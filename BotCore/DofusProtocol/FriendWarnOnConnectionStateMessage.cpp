#include "FriendWarnOnConnectionStateMessage.h"

void FriendWarnOnConnectionStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendWarnOnConnectionStateMessage(input);
}

void FriendWarnOnConnectionStateMessage::deserializeAs_FriendWarnOnConnectionStateMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void FriendWarnOnConnectionStateMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

