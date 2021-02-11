#ifndef SHORTCUTSMILEY
#define SHORTCUTSMILEY

#include "../IO/ICustomDataInput.h"
#include "Shortcut.h"

class ShortcutSmiley : public Shortcut {
public:
    unsigned int smileyId = 0;
    unsigned int protocolId = 879;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutSmiley(ICustomDataInput &input);

    void _smileyIdFunc(ICustomDataInput &input);
};

#endif