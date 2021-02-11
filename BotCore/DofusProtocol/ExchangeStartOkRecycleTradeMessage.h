#ifndef EXCHANGESTARTOKRECYCLETRADEMESSAGE
#define EXCHANGESTARTOKRECYCLETRADEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartOkRecycleTradeMessage : public NetworkInterface {
public:
    unsigned int percentToPrism = 0;
    unsigned int percentToPlayer = 0;
    unsigned int protocolId = 6563;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkRecycleTradeMessage(ICustomDataInput &input);

    void _percentToPrismFunc(ICustomDataInput &input);

    void _percentToPlayerFunc(ICustomDataInput &input);
};

#endif