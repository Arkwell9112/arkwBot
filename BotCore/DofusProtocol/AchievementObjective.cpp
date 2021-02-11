#include "AchievementObjective.h"

void AchievementObjective::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementObjective(input);
}

void AchievementObjective::deserializeAs_AchievementObjective(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_maxValueFunc(input);
}

void AchievementObjective::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhInt();

}

void AchievementObjective::_maxValueFunc(ICustomDataInput &input) {
    this->maxValue = input.readVarUhShort();

}

