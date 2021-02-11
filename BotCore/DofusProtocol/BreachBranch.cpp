#include "BreachBranch.h"

void BreachBranch::deserialize(ICustomDataInput &input) {
    this->deserializeAs_BreachBranch(input);
}

void BreachBranch::deserializeAs_BreachBranch(ICustomDataInput &input) {
    MonsterInGroupLightInformations _item3;
    MonsterInGroupLightInformations _item7;
    this->_roomFunc(input);
    this->_elementFunc(input);
    unsigned int _bossesLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _bossesLen; _i3++) {
        _item3.deserialize(input);
        this->bosses.push_back(_item3);
    }
    this->_mapFunc(input);
    this->_scoreFunc(input);
    this->_relativeScoreFunc(input);
    unsigned int _monstersLen = input.readUnsignedShort();
    for (unsigned int _i7 = 0; _i7 < _monstersLen; _i7++) {
        _item7.deserialize(input);
        this->monsters.push_back(_item7);
    }
}

void BreachBranch::_roomFunc(ICustomDataInput &input) {
    this->room = input.readByte();

}

void BreachBranch::_elementFunc(ICustomDataInput &input) {
    this->element = input.readInt();

}

void BreachBranch::_bossesFunc(ICustomDataInput &input) {
    MonsterInGroupLightInformations _item;
    _item.deserialize(input);
    this->bosses.push_back(_item);
}

void BreachBranch::_mapFunc(ICustomDataInput &input) {
    this->map = input.readDouble();

}

void BreachBranch::_scoreFunc(ICustomDataInput &input) {
    this->score = input.readShort();
}

void BreachBranch::_relativeScoreFunc(ICustomDataInput &input) {
    this->relativeScore = input.readShort();
}

void BreachBranch::_monstersFunc(ICustomDataInput &input) {
    MonsterInGroupLightInformations _item;
    _item.deserialize(input);
    this->monsters.push_back(_item);
}

