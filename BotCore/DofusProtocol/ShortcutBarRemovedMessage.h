#ifndef SHORTCUTBARREMOVEDMESSAGE
#define SHORTCUTBARREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarRemovedMessage : public NetworkInterface {
public:
    unsigned int barType = 0;
    unsigned int slot = 0;
    unsigned int protocolId = 5386;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarRemovedMessage(ICustomDataInput &input);

    void _barTypeFunc(ICustomDataInput &input);

    void _slotFunc(ICustomDataInput &input);
};

#endif