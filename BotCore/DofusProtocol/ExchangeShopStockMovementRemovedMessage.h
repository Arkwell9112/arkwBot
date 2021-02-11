#ifndef EXCHANGESHOPSTOCKMOVEMENTREMOVEDMESSAGE
#define EXCHANGESHOPSTOCKMOVEMENTREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeShopStockMovementRemovedMessage : public NetworkInterface {
public:
    unsigned int objectId = 0;
    unsigned int protocolId = 1673;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeShopStockMovementRemovedMessage(ICustomDataInput &input);

    void _objectIdFunc(ICustomDataInput &input);
};

#endif