#include "ShortcutObjectPreset.h"

void ShortcutObjectPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutObjectPreset(input);
}

void ShortcutObjectPreset::deserializeAs_ShortcutObjectPreset(ICustomDataInput &input) {
    ShortcutObject::deserialize(input);
    this->_presetIdFunc(input);
}

void ShortcutObjectPreset::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

