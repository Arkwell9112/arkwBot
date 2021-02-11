#include "AchievementAlmostFinishedDetailedListMessage.h"

void AchievementAlmostFinishedDetailedListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementAlmostFinishedDetailedListMessage(input);
}

void AchievementAlmostFinishedDetailedListMessage::deserializeAs_AchievementAlmostFinishedDetailedListMessage(
        ICustomDataInput &input) {
    Achievement _item1;
    unsigned int _almostFinishedAchievementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _almostFinishedAchievementsLen; _i1++) {
        _item1.deserialize(input);
        this->almostFinishedAchievements.push_back(_item1);
    }
}

void AchievementAlmostFinishedDetailedListMessage::_almostFinishedAchievementsFunc(ICustomDataInput &input) {
    Achievement _item;
    _item.deserialize(input);
    this->almostFinishedAchievements.push_back(_item);
}

