#include "ForgettableSpellsPreset.h"

void ForgettableSpellsPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ForgettableSpellsPreset(input);
}

void ForgettableSpellsPreset::deserializeAs_ForgettableSpellsPreset(ICustomDataInput &input) {
    SpellForPreset _item2;
    Preset::deserialize(input);
    this->baseSpellsPreset.deserialize(input);
    unsigned int _forgettableSpellsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _forgettableSpellsLen; _i2++) {
        _item2.deserialize(input);
        this->forgettableSpells.push_back(_item2);
    }
}

void ForgettableSpellsPreset::_forgettableSpellsFunc(ICustomDataInput &input) {
    SpellForPreset _item;
    _item.deserialize(input);
    this->forgettableSpells.push_back(_item);
}

