#ifndef EXCHANGECRAFTPAYMENTMODIFIEDMESSAGE
#define EXCHANGECRAFTPAYMENTMODIFIEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeCraftPaymentModifiedMessage : public NetworkInterface {
public:
    double goldSum = 0;
    unsigned int protocolId = 6117;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeCraftPaymentModifiedMessage(ICustomDataInput &input);

    void _goldSumFunc(ICustomDataInput &input);
};

#endif