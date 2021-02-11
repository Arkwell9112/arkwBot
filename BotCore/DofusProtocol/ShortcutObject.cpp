#include "ShortcutObject.h"

void ShortcutObject::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutObject(input);
}

void ShortcutObject::deserializeAs_ShortcutObject(ICustomDataInput &input) {
    Shortcut::deserialize(input);
}

