#ifndef ITEMDURABILITY
#define ITEMDURABILITY

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Item.h"

class ItemDurability : public NetworkInterface {
public:
    int durability = 0;
    int durabilityMax = 0;
    unsigned int protocolId = 1637;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ItemDurability(ICustomDataInput &input);

    void _durabilityFunc(ICustomDataInput &input);

    void _durabilityMaxFunc(ICustomDataInput &input);
};

#endif