#include "HumanOptionFollowers.h"

void HumanOptionFollowers::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanOptionFollowers(input);
}

void HumanOptionFollowers::deserializeAs_HumanOptionFollowers(ICustomDataInput &input) {
    IndexedEntityLook _item1;
    HumanOption::deserialize(input);
    unsigned int _followingCharactersLookLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _followingCharactersLookLen; _i1++) {
        _item1.deserialize(input);
        this->followingCharactersLook.push_back(_item1);
    }
}

void HumanOptionFollowers::_followingCharactersLookFunc(ICustomDataInput &input) {
    IndexedEntityLook _item;
    _item.deserialize(input);
    this->followingCharactersLook.push_back(_item);
}

