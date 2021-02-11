#ifndef EXCHANGEREQUESTEDMESSAGE
#define EXCHANGEREQUESTEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeRequestedMessage : public NetworkInterface {
public:
    int exchangeType = 0;
    unsigned int protocolId = 1895;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeRequestedMessage(ICustomDataInput &input);

    void _exchangeTypeFunc(ICustomDataInput &input);
};

#endif