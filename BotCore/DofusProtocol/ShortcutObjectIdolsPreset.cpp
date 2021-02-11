#include "ShortcutObjectIdolsPreset.h"

void ShortcutObjectIdolsPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutObjectIdolsPreset(input);
}

void ShortcutObjectIdolsPreset::deserializeAs_ShortcutObjectIdolsPreset(ICustomDataInput &input) {
    ShortcutObject::deserialize(input);
    this->_presetIdFunc(input);
}

void ShortcutObjectIdolsPreset::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

