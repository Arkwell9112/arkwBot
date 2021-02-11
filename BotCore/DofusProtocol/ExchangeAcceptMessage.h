#ifndef EXCHANGEACCEPTMESSAGE
#define EXCHANGEACCEPTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeAcceptMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1591;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeAcceptMessage(ICustomDataInput &input);
};

#endif