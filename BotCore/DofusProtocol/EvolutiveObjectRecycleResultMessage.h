#ifndef EVOLUTIVEOBJECTRECYCLERESULTMESSAGE
#define EVOLUTIVEOBJECTRECYCLERESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "RecycledItem.h"
#include "Item.h"
#include "RecycleResultMessage.h"

class EvolutiveObjectRecycleResultMessage : public NetworkInterface {
public:
    std::vector<RecycledItem> recycledItems;
    unsigned int protocolId = 9919;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_EvolutiveObjectRecycleResultMessage(ICustomDataInput &input);

    void _recycledItemsFunc(ICustomDataInput &input);
};

#endif