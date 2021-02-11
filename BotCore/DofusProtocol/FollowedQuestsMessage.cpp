#include "FollowedQuestsMessage.h"

void FollowedQuestsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FollowedQuestsMessage(input);
}

void FollowedQuestsMessage::deserializeAs_FollowedQuestsMessage(ICustomDataInput &input) {
    QuestActiveDetailedInformations _item1;
    unsigned int _questsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _questsLen; _i1++) {
        _item1.deserialize(input);
        this->quests.push_back(_item1);
    }
}

void FollowedQuestsMessage::_questsFunc(ICustomDataInput &input) {
    QuestActiveDetailedInformations _item;
    _item.deserialize(input);
    this->quests.push_back(_item);
}

