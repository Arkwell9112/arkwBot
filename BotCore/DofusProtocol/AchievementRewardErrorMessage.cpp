#include "AchievementRewardErrorMessage.h"

void AchievementRewardErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementRewardErrorMessage(input);
}

void AchievementRewardErrorMessage::deserializeAs_AchievementRewardErrorMessage(ICustomDataInput &input) {
    this->_achievementIdFunc(input);
}

void AchievementRewardErrorMessage::_achievementIdFunc(ICustomDataInput &input) {
    this->achievementId = input.readShort();
}

