#ifndef EXCHANGEREQUESTONSHOPSTOCKMESSAGE
#define EXCHANGEREQUESTONSHOPSTOCKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeRequestOnShopStockMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9571;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeRequestOnShopStockMessage(ICustomDataInput &input);
};

#endif