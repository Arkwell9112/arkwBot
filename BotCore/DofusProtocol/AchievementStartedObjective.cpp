#include "AchievementStartedObjective.h"

void AchievementStartedObjective::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementStartedObjective(input);
}

void AchievementStartedObjective::deserializeAs_AchievementStartedObjective(ICustomDataInput &input) {
    AchievementObjective::deserialize(input);
    this->_valueFunc(input);
}

void AchievementStartedObjective::_valueFunc(ICustomDataInput &input) {
    this->value = input.readVarUhShort();

}

