#ifndef EXCHANGESTARTEDMOUNTSTOCKMESSAGE
#define EXCHANGESTARTEDMOUNTSTOCKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "ObjectItem.h"
#include "Item.h"

class ExchangeStartedMountStockMessage : public NetworkInterface {
public:
    std::vector<ObjectItem> objectsInfos;
    unsigned int protocolId = 1871;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartedMountStockMessage(ICustomDataInput &input);

    void _objectsInfosFunc(ICustomDataInput &input);
};

#endif