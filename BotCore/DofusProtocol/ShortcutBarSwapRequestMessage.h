#ifndef SHORTCUTBARSWAPREQUESTMESSAGE
#define SHORTCUTBARSWAPREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Shortcut.h"

class ShortcutBarSwapRequestMessage : public NetworkInterface {
public:
    unsigned int barType = 0;
    unsigned int firstSlot = 0;
    unsigned int secondSlot = 0;
    unsigned int protocolId = 6721;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ShortcutBarSwapRequestMessage(ICustomDataInput &input);

    void _barTypeFunc(ICustomDataInput &input);

    void _firstSlotFunc(ICustomDataInput &input);

    void _secondSlotFunc(ICustomDataInput &input);
};

#endif