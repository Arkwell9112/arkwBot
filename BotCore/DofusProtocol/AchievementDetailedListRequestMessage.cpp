#include "AchievementDetailedListRequestMessage.h"

void AchievementDetailedListRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementDetailedListRequestMessage(input);
}

void
AchievementDetailedListRequestMessage::deserializeAs_AchievementDetailedListRequestMessage(ICustomDataInput &input) {
    this->_categoryIdFunc(input);
}

void AchievementDetailedListRequestMessage::_categoryIdFunc(ICustomDataInput &input) {
    this->categoryId = input.readVarUhShort();

}

