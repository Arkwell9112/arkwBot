#ifndef WATCHINVENTORYCONTENTMESSAGE
#define WATCHINVENTORYCONTENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "InventoryContentMessage.h"

class WatchInventoryContentMessage : public InventoryContentMessage {
public:
    unsigned int protocolId = 4970;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_WatchInventoryContentMessage(ICustomDataInput &input);
};

#endif