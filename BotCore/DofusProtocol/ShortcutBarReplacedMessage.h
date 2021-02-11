#ifndef SHORTCUTBARREPLACEDMESSAGE
#define SHORTCUTBARREPLACEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarReplacedMessage : public NetworkInterface {
public:
    unsigned int barType = 0;
    Shortcut shortcut;
    unsigned int protocolId = 6745;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarReplacedMessage(ICustomDataInput &input);

    void _barTypeFunc(ICustomDataInput &input);
};

#endif