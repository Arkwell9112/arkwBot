#include "AchievementAchievedRewardable.h"

void AchievementAchievedRewardable::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementAchievedRewardable(input);
}

void AchievementAchievedRewardable::deserializeAs_AchievementAchievedRewardable(ICustomDataInput &input) {
    AchievementAchieved::deserialize(input);
    this->_finishedlevelFunc(input);
}

void AchievementAchievedRewardable::_finishedlevelFunc(ICustomDataInput &input) {
    this->finishedlevel = input.readVarUhShort();

}

