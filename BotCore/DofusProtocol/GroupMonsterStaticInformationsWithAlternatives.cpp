#include "GroupMonsterStaticInformationsWithAlternatives.h"

void GroupMonsterStaticInformationsWithAlternatives::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GroupMonsterStaticInformationsWithAlternatives(input);
}

void GroupMonsterStaticInformationsWithAlternatives::deserializeAs_GroupMonsterStaticInformationsWithAlternatives(
        ICustomDataInput &input) {
    AlternativeMonstersInGroupLightInformations _item1;
    GroupMonsterStaticInformations::deserialize(input);
    unsigned int _alternativesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _alternativesLen; _i1++) {
        _item1.deserialize(input);
        this->alternatives.push_back(_item1);
    }
}

void GroupMonsterStaticInformationsWithAlternatives::_alternativesFunc(ICustomDataInput &input) {
    AlternativeMonstersInGroupLightInformations _item;
    _item.deserialize(input);
    this->alternatives.push_back(_item);
}

