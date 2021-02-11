#ifndef SHORTCUTBARREFRESHMESSAGE
#define SHORTCUTBARREFRESHMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarRefreshMessage : public NetworkInterface {
public:
    unsigned int barType = 0;
    Shortcut shortcut;
    unsigned int protocolId = 9336;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarRefreshMessage(ICustomDataInput &input);

    void _barTypeFunc(ICustomDataInput &input);
};

#endif