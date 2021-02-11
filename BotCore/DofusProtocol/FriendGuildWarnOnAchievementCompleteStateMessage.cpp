#include "FriendGuildWarnOnAchievementCompleteStateMessage.h"

void FriendGuildWarnOnAchievementCompleteStateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FriendGuildWarnOnAchievementCompleteStateMessage(input);
}

void FriendGuildWarnOnAchievementCompleteStateMessage::deserializeAs_FriendGuildWarnOnAchievementCompleteStateMessage(
        ICustomDataInput &input) {
    this->_enableFunc(input);
}

void FriendGuildWarnOnAchievementCompleteStateMessage::_enableFunc(ICustomDataInput &input) {
    this->enable = input.readBoolean();
}

