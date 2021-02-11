#include "SpellForPreset.h"

void SpellForPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpellForPreset(input);
}

void SpellForPreset::deserializeAs_SpellForPreset(ICustomDataInput &input) {
    int _val2 = 0;
    this->_spellIdFunc(input);
    unsigned int _shortcutsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _shortcutsLen; _i2++) {
        _val2 = input.readShort();
        this->shortcuts.push_back(_val2);
    }
}

void SpellForPreset::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

void SpellForPreset::_shortcutsFunc(ICustomDataInput &input) {
    int _val = input.readShort();
    this->shortcuts.push_back(_val);
}

