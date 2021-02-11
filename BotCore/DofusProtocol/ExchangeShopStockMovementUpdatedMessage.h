#ifndef EXCHANGESHOPSTOCKMOVEMENTUPDATEDMESSAGE
#define EXCHANGESHOPSTOCKMOVEMENTUPDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeShopStockMovementUpdatedMessage : public NetworkInterface {
public:
    ObjectItemToSell objectInfo;
    unsigned int protocolId = 3878;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeShopStockMovementUpdatedMessage(ICustomDataInput &input);
};

#endif