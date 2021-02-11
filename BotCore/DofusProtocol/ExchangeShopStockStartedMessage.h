#ifndef EXCHANGESHOPSTOCKSTARTEDMESSAGE
#define EXCHANGESHOPSTOCKSTARTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItemToSell.h"
#include "ObjectItem.h"
#include "Item.h"

class ExchangeShopStockStartedMessage : public NetworkInterface {
public:
    std::vector<ObjectItemToSell> objectsInfos;
    unsigned int protocolId = 9561;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeShopStockStartedMessage(ICustomDataInput &input);

    void _objectsInfosFunc(ICustomDataInput &input);
};

#endif