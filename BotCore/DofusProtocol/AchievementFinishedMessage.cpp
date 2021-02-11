#include "AchievementFinishedMessage.h"

void AchievementFinishedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementFinishedMessage(input);
}

void AchievementFinishedMessage::deserializeAs_AchievementFinishedMessage(ICustomDataInput &input) {
    this->achievement.deserialize(input);
}

