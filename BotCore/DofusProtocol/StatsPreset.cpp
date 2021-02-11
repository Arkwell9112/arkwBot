#include "StatsPreset.h"

void StatsPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatsPreset(input);
}

void StatsPreset::deserializeAs_StatsPreset(ICustomDataInput &input) {
    SimpleCharacterCharacteristicForPreset _item1;
    Preset::deserialize(input);
    unsigned int _statsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _statsLen; _i1++) {
        _item1.deserialize(input);
        this->stats.push_back(_item1);
    }
}

void StatsPreset::_statsFunc(ICustomDataInput &input) {
    SimpleCharacterCharacteristicForPreset _item;
    _item.deserialize(input);
    this->stats.push_back(_item);
}

