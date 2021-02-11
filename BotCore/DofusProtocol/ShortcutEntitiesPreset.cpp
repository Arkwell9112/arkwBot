#include "ShortcutEntitiesPreset.h"

void ShortcutEntitiesPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutEntitiesPreset(input);
}

void ShortcutEntitiesPreset::deserializeAs_ShortcutEntitiesPreset(ICustomDataInput &input) {
    Shortcut::deserialize(input);
    this->_presetIdFunc(input);
}

void ShortcutEntitiesPreset::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

