#ifndef EXCHANGESHOPSTOCKMULTIMOVEMENTREMOVEDMESSAGE
#define EXCHANGESHOPSTOCKMULTIMOVEMENTREMOVEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeShopStockMultiMovementRemovedMessage : public NetworkInterface {
public:
    std::vector<unsigned int> objectIdList;
    unsigned int protocolId = 3910;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeShopStockMultiMovementRemovedMessage(ICustomDataInput &input);

    void _objectIdListFunc(ICustomDataInput &input);
};

#endif