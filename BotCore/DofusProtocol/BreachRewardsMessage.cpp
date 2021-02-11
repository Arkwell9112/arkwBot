#include "BreachRewardsMessage.h"

void BreachRewardsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachRewardsMessage(input);
}

void BreachRewardsMessage::deserializeAs_BreachRewardsMessage(ICustomDataInput &input) {
    BreachReward _item1;
    unsigned int _rewardsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _rewardsLen; _i1++) {
        _item1.deserialize(input);
        this->rewards.push_back(_item1);
    }
}

void BreachRewardsMessage::_rewardsFunc(ICustomDataInput &input) {
    BreachReward _item;
    _item.deserialize(input);
    this->rewards.push_back(_item);
}

