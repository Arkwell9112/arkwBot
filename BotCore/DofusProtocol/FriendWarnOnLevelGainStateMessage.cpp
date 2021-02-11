#include "FriendWarnOnLevelGainStateMessage.h"

void FriendWarnOnLevelGainStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendWarnOnLevelGainStateMessage(input);
}

void FriendWarnOnLevelGainStateMessage::deserializeAs_FriendWarnOnLevelGainStateMessage(ICustomDataInput &input) {
    this->_enableFunc(input);
}

void FriendWarnOnLevelGainStateMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

