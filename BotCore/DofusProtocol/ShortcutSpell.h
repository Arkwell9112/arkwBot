#ifndef SHORTCUTSPELL
#define SHORTCUTSPELL

#include "../IO/ICustomDataInput.h"
#include "Shortcut.h"

class ShortcutSpell : public Shortcut {
public:
    unsigned int spellId = 0;
    unsigned int protocolId = 571;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutSpell(ICustomDataInput &input);

    void _spellIdFunc(ICustomDataInput &input);
};

#endif