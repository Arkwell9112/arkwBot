#ifndef SHORTCUTEMOTE
#define SHORTCUTEMOTE

#include "../IO/ICustomDataInput.h"
#include "Shortcut.h"

class ShortcutEmote : public Shortcut {
public:
    unsigned int emoteId = 0;
    unsigned int protocolId = 3412;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutEmote(ICustomDataInput &input);

    void _emoteIdFunc(ICustomDataInput &input);
};

#endif