#include "FriendSetWarnOnLevelGainMessage.h"

void FriendSetWarnOnLevelGainMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendSetWarnOnLevelGainMessage(input);
}

void FriendSetWarnOnLevelGainMessage::deserializeAs_FriendSetWarnOnLevelGainMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void FriendSetWarnOnLevelGainMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

