#ifndef SHORTCUTBARCONTENTMESSAGE
#define SHORTCUTBARCONTENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Shortcut.h"

class ShortcutBarContentMessage : public NetworkInterface {
public:
    unsigned int barType = 0;
    std::vector<Shortcut> shortcuts;
    unsigned int protocolId = 3499;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarContentMessage(ICustomDataInput &input);

    void _barTypeFunc(ICustomDataInput &input);

    void _shortcutsFunc(ICustomDataInput &input);
};

#endif