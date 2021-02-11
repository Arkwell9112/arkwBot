#ifndef SHORTCUTOBJECTPRESET
#define SHORTCUTOBJECTPRESET

#include "../IO/ICustomDataInput.h"
#include "ShortcutObject.h"
#include "Shortcut.h"
#include "Preset.h"

class ShortcutObjectPreset : public ShortcutObject {
public:
    int presetId = 0;
    unsigned int protocolId = 2425;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutObjectPreset(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);
};

#endif