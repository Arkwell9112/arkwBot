#ifndef SHORTCUTBARADDREQUESTMESSAGE
#define SHORTCUTBARADDREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarAddRequestMessage : public NetworkInterface {
public:
    unsigned int barType = 0;
    Shortcut shortcut;
    unsigned int protocolId = 8744;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarAddRequestMessage(ICustomDataInput &input);

    void _barTypeFunc(ICustomDataInput &input);
};

#endif