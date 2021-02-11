#include "AchievementRewardRequestMessage.h"

void AchievementRewardRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementRewardRequestMessage(input);
}

void AchievementRewardRequestMessage::deserializeAs_AchievementRewardRequestMessage(ICustomDataInput &input) {
    this->_achievementIdFunc(input);
}

void AchievementRewardRequestMessage::_achievementIdFunc(ICustomDataInput &input) {
    this->achievementId = input.readShort();
}

