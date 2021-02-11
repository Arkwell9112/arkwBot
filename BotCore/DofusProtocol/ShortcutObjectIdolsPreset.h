#ifndef SHORTCUTOBJECTIDOLSPRESET
#define SHORTCUTOBJECTIDOLSPRESET

#include "../IO/ICustomDataInput.h"
#include "ShortcutObject.h"
#include "Shortcut.h"
#include "Preset.h"
#include "IdolsPreset.h"
#include "Idol.h"

class ShortcutObjectIdolsPreset : public ShortcutObject {
public:
    int presetId = 0;
    unsigned int protocolId = 5835;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutObjectIdolsPreset(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);
};

#endif