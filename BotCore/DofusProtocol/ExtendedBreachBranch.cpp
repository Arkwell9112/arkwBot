#include "ExtendedBreachBranch.h"

void ExtendedBreachBranch::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExtendedBreachBranch(input);
}

void ExtendedBreachBranch::deserializeAs_ExtendedBreachBranch(ICustomDataInput &input) {
    BreachReward _item1;
    BreachBranch::deserialize(input);
    unsigned int _rewardsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _rewardsLen; _i1++) {
        _item1.deserialize(input);
        this->rewards.push_back(_item1);
    }
    this->_modifierFunc(input);
    this->_prizeFunc(input);
}

void ExtendedBreachBranch::_rewardsFunc(ICustomDataInput &input) {
    BreachReward _item;
    _item.deserialize(input);
    this->rewards.push_back(_item);
}

void ExtendedBreachBranch::_modifierFunc(ICustomDataInput &input) {
    this->modifier = input.readVarInt();
}

void ExtendedBreachBranch::_prizeFunc(ICustomDataInput &input) {
    this->prize = input.readVarUhInt();

}

