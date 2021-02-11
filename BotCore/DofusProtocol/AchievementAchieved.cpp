#include "AchievementAchieved.h"

void AchievementAchieved::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementAchieved(input);
}

void AchievementAchieved::deserializeAs_AchievementAchieved(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_achievedByFunc(input);
}

void AchievementAchieved::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

void AchievementAchieved::_achievedByFunc(ICustomDataInput &input) {
    this->achievedBy = input.readVarUhLong();

}

