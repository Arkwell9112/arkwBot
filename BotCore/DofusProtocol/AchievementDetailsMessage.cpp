#include "AchievementDetailsMessage.h"

void AchievementDetailsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementDetailsMessage(input);
}

void AchievementDetailsMessage::deserializeAs_AchievementDetailsMessage(ICustomDataInput &input) {
    this->achievement.deserialize(input);
}

