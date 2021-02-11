#ifndef SHORTCUTOBJECT
#define SHORTCUTOBJECT

#include "../IO/ICustomDataInput.h"
#include "Shortcut.h"

class ShortcutObject : public Shortcut {
public:
    unsigned int protocolId = 7541;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutObject(ICustomDataInput &input);
};

#endif