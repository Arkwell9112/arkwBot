#include "AlternativeMonstersInGroupLightInformations.h"

void AlternativeMonstersInGroupLightInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlternativeMonstersInGroupLightInformations(input);
}

void AlternativeMonstersInGroupLightInformations::deserializeAs_AlternativeMonstersInGroupLightInformations(
        ICustomDataInput &input) {
    MonsterInGroupLightInformations _item2;
    this->_playerCountFunc(input);
    unsigned int _monstersLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _monstersLen; _i2++) {
        _item2.deserialize(input);
        this->monsters.push_back(_item2);
    }
}

void AlternativeMonstersInGroupLightInformations::_playerCountFunc(ICustomDataInput &input) {
    this->playerCount = input.readInt();
}

void AlternativeMonstersInGroupLightInformations::_monstersFunc(ICustomDataInput &input) {
    MonsterInGroupLightInformations _item;
    _item.deserialize(input);
    this->monsters.push_back(_item);
}

