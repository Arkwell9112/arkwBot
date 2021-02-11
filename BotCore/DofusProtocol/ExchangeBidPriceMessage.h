#ifndef EXCHANGEBIDPRICEMESSAGE
#define EXCHANGEBIDPRICEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeBidPriceMessage : public NetworkInterface {
public:
    unsigned int genericId = 0;
    double averagePrice = 0;
    unsigned int protocolId = 5618;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeBidPriceMessage(ICustomDataInput &input);

    void _genericIdFunc(ICustomDataInput &input);

    void _averagePriceFunc(ICustomDataInput &input);
};

#endif