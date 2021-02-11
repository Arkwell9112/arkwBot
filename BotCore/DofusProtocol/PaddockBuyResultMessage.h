#ifndef PADDOCKBUYRESULTMESSAGE
#define PADDOCKBUYRESULTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PaddockBuyResultMessage : public NetworkInterface {
public:
    double paddockId = 0;
    bool bought = false;
    double realPrice = 0;
    unsigned int protocolId = 2242;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PaddockBuyResultMessage(ICustomDataInput &input);

    void _paddockIdFunc(ICustomDataInput &input);

    void _boughtFunc(ICustomDataInput &input);

    void _realPriceFunc(ICustomDataInput &input);
};

#endif