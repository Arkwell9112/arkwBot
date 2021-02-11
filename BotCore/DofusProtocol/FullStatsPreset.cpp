#include "FullStatsPreset.h"

void FullStatsPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FullStatsPreset(input);
}

void FullStatsPreset::deserializeAs_FullStatsPreset(ICustomDataInput &input) {
    CharacterCharacteristicForPreset _item1;
    Preset::deserialize(input);
    unsigned int _statsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _statsLen; _i1++) {
        _item1.deserialize(input);
        this->stats.push_back(_item1);
    }
}

void FullStatsPreset::_statsFunc(ICustomDataInput &input) {
    CharacterCharacteristicForPreset _item;
    _item.deserialize(input);
    this->stats.push_back(_item);
}

