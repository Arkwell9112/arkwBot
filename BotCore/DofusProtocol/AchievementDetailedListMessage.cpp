#include "AchievementDetailedListMessage.h"

void AchievementDetailedListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementDetailedListMessage(input);
}

void AchievementDetailedListMessage::deserializeAs_AchievementDetailedListMessage(ICustomDataInput &input) {
    Achievement _item1;
    Achievement _item2;
    unsigned int _startedAchievementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _startedAchievementsLen; _i1++) {
        _item1.deserialize(input);
        this->startedAchievements.push_back(_item1);
    }
    unsigned int _finishedAchievementsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _finishedAchievementsLen; _i2++) {
        _item2.deserialize(input);
        this->finishedAchievements.push_back(_item2);
    }
}

void AchievementDetailedListMessage::_startedAchievementsFunc(ICustomDataInput &input) {
    Achievement _item;
    _item.deserialize(input);
    this->startedAchievements.push_back(_item);
}

void AchievementDetailedListMessage::_finishedAchievementsFunc(ICustomDataInput &input) {
    Achievement _item;
    _item.deserialize(input);
    this->finishedAchievements.push_back(_item);
}

