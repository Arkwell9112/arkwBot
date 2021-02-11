#include "SpellsPreset.h"

void SpellsPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpellsPreset(input);
}

void SpellsPreset::deserializeAs_SpellsPreset(ICustomDataInput &input) {
    SpellForPreset _item1;
    Preset::deserialize(input);
    unsigned int _spellsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _spellsLen; _i1++) {
        _item1.deserialize(input);
        this->spells.push_back(_item1);
    }
}

void SpellsPreset::_spellsFunc(ICustomDataInput &input) {
    SpellForPreset _item;
    _item.deserialize(input);
    this->spells.push_back(_item);
}

