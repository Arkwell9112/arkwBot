#include "FriendDeleteRequestMessage.h"

void FriendDeleteRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendDeleteRequestMessage(input);
}

void FriendDeleteRequestMessage::deserializeAs_FriendDeleteRequestMessage(ICustomDataInput &input) {
    this->_accountIdFunc(input);
}

void FriendDeleteRequestMessage::_accountIdFunc(ICustomDataInput &input) {
    this->accountId = input.readInt();

}

