#include "AchievementDetailsRequestMessage.h"

void AchievementDetailsRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementDetailsRequestMessage(input);
}

void AchievementDetailsRequestMessage::deserializeAs_AchievementDetailsRequestMessage(ICustomDataInput &input) {
    this->_achievementIdFunc(input);
}

void AchievementDetailsRequestMessage::_achievementIdFunc(ICustomDataInput &input) {
    this->achievementId = input.readVarUhShort();

}

