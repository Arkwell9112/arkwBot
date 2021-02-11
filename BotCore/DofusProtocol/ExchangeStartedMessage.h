#ifndef EXCHANGESTARTEDMESSAGE
#define EXCHANGESTARTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartedMessage : public NetworkInterface {
public:
    int exchangeType = 0;
    unsigned int protocolId = 7342;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartedMessage(ICustomDataInput &input);

    void _exchangeTypeFunc(ICustomDataInput &input);
};

#endif