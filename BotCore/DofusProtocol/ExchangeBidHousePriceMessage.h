#ifndef EXCHANGEBIDHOUSEPRICEMESSAGE
#define EXCHANGEBIDHOUSEPRICEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBidHousePriceMessage : public NetworkInterface {
public:
    unsigned int genId = 0;
    unsigned int protocolId = 3350;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidHousePriceMessage(ICustomDataInput &input);

    void _genIdFunc(ICustomDataInput &input);
};

#endif