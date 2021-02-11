#include "../ProtocolTypeManager.h"
#include "AchievementListMessage.h"

void AchievementListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AchievementListMessage(input);
}

void AchievementListMessage::deserializeAs_AchievementListMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    AchievementAchieved _item1;
    unsigned int _finishedAchievementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _finishedAchievementsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<AchievementAchieved>(input, _id1);
        this->finishedAchievements.push_back(_item1);
    }
}

void AchievementListMessage::_finishedAchievementsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    AchievementAchieved _item = ProtocolTypeManager::getObject<AchievementAchieved>(input, _id);
    _item.deserialize(input);
    this->finishedAchievements.push_back(_item);
}

