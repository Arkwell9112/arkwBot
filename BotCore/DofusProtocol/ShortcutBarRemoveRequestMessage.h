#ifndef SHORTCUTBARREMOVEREQUESTMESSAGE
#define SHORTCUTBARREMOVEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarRemoveRequestMessage : public NetworkInterface {
public:
    unsigned int barType = 0;
    unsigned int slot = 0;
    unsigned int protocolId = 3149;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarRemoveRequestMessage(ICustomDataInput &input);

    void _barTypeFunc(ICustomDataInput &input);

    void _slotFunc(ICustomDataInput &input);
};

#endif