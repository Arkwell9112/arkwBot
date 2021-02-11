#include "GameRefreshMonsterBoostsMessage.h"

void GameRefreshMonsterBoostsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GameRefreshMonsterBoostsMessage(input);
}

void GameRefreshMonsterBoostsMessage::deserializeAs_GameRefreshMonsterBoostsMessage(ICustomDataInput &input) {
    MonsterBoosts _item1;
    MonsterBoosts _item2;
    unsigned int _monsterBoostsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _monsterBoostsLen; _i1++) {
        _item1.deserialize(input);
        this->monsterBoosts.push_back(_item1);
    }
    unsigned int _familyBoostsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _familyBoostsLen; _i2++) {
        _item2.deserialize(input);
        this->familyBoosts.push_back(_item2);
    }
}

void GameRefreshMonsterBoostsMessage::_monsterBoostsFunc(ICustomDataInput &input) {
    MonsterBoosts _item;
    _item.deserialize(input);
    this->monsterBoosts.push_back(_item);
}

void GameRefreshMonsterBoostsMessage::_familyBoostsFunc(ICustomDataInput &input) {
    MonsterBoosts _item;
    _item.deserialize(input);
    this->familyBoosts.push_back(_item);
}

