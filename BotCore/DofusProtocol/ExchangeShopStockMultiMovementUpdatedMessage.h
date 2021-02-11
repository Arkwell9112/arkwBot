#ifndef EXCHANGESHOPSTOCKMULTIMOVEMENTUPDATEDMESSAGE
#define EXCHANGESHOPSTOCKMULTIMOVEMENTUPDATEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeShopStockMultiMovementUpdatedMessage : public NetworkInterface {
public:
    std::vector<ObjectItemToSell> objectInfoList;
    unsigned int protocolId = 7460;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeShopStockMultiMovementUpdatedMessage(ICustomDataInput &input);

    void _objectInfoListFunc(ICustomDataInput &input);
};

#endif