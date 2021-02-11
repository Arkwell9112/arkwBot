#include "GroupMonsterStaticInformations.h"

void GroupMonsterStaticInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GroupMonsterStaticInformations(input);
}

void GroupMonsterStaticInformations::deserializeAs_GroupMonsterStaticInformations(ICustomDataInput &input) {
    MonsterInGroupInformations _item2;
    this->mainCreatureLightInfos.deserialize(input);
    unsigned int _underlingsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _underlingsLen; _i2++) {
        _item2.deserialize(input);
        this->underlings.push_back(_item2);
    }
}

void GroupMonsterStaticInformations::_underlingsFunc(ICustomDataInput &input) {
    MonsterInGroupInformations _item;
    _item.deserialize(input);
    this->underlings.push_back(_item);
}

