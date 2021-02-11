#include "FriendAddFailureMessage.h"

void FriendAddFailureMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendAddFailureMessage(input);
}

void FriendAddFailureMessage::deserializeAs_FriendAddFailureMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void FriendAddFailureMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

