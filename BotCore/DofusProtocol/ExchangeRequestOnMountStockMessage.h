#ifndef EXCHANGEREQUESTONMOUNTSTOCKMESSAGE
#define EXCHANGEREQUESTONMOUNTSTOCKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeRequestOnMountStockMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2925;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeRequestOnMountStockMessage(ICustomDataInput &input);
};

#endif