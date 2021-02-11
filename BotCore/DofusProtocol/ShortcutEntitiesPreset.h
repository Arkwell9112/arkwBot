#ifndef SHORTCUTENTITIESPRESET
#define SHORTCUTENTITIESPRESET

#include "../IO/ICustomDataInput.h"
#include "Shortcut.h"
#include "Preset.h"
#include "EntitiesPreset.h"

class ShortcutEntitiesPreset : public Shortcut {
public:
    int presetId = 0;
    unsigned int protocolId = 3594;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutEntitiesPreset(ICustomDataInput &input);

    void _presetIdFunc(ICustomDataInput &input);
};

#endif