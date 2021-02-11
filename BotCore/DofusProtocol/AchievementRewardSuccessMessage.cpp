#include "AchievementRewardSuccessMessage.h"

void AchievementRewardSuccessMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementRewardSuccessMessage(input);
}

void AchievementRewardSuccessMessage::deserializeAs_AchievementRewardSuccessMessage(ICustomDataInput &input) {
    this->_achievementIdFunc(input);
}

void AchievementRewardSuccessMessage::_achievementIdFunc(ICustomDataInput &input) {
    this->achievementId = input.readShort();
}

