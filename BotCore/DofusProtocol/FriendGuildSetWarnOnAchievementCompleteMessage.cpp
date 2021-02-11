#include "FriendGuildSetWarnOnAchievementCompleteMessage.h"

void FriendGuildSetWarnOnAchievementCompleteMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendGuildSetWarnOnAchievementCompleteMessage(input);
}

void FriendGuildSetWarnOnAchievementCompleteMessage::deserializeAs_FriendGuildSetWarnOnAchievementCompleteMessage(
        ICustomDataInput &input) {
    this->_enableFunc(input);
}

void FriendGuildSetWarnOnAchievementCompleteMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

