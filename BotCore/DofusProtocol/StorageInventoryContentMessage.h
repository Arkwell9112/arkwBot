#ifndef STORAGEINVENTORYCONTENTMESSAGE
#define STORAGEINVENTORYCONTENTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "InventoryContentMessage.h"

class StorageInventoryContentMessage : public InventoryContentMessage {
public:
    unsigned int protocolId = 8412;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StorageInventoryContentMessage(ICustomDataInput &input);
};

#endif