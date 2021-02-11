#ifndef INVENTORYWEIGHTMESSAGE
#define INVENTORYWEIGHTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class InventoryWeightMessage : public NetworkInterface {
public:
    unsigned int inventoryWeight = 0;
    unsigned int shopWeight = 0;
    unsigned int weightMax = 0;
    unsigned int protocolId = 8954;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_InventoryWeightMessage(ICustomDataInput &input);

    void _inventoryWeightFunc(ICustomDataInput &input);

    void _shopWeightFunc(ICustomDataInput &input);

    void _weightMaxFunc(ICustomDataInput &input);
};

#endif