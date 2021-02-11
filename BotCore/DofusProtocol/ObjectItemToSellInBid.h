#ifndef OBJECTITEMTOSELLINBID
#define OBJECTITEMTOSELLINBID

#include "../IO/ICustomDataInput.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ObjectItemToSellInBid : public ObjectItemToSell {
public:
    unsigned int unsoldDelay = 0;
    unsigned int protocolId = 8467;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ObjectItemToSellInBid(ICustomDataInput &input);

    void _unsoldDelayFunc(ICustomDataInput &input);
};

#endif