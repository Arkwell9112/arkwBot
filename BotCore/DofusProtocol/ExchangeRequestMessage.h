#ifndef EXCHANGEREQUESTMESSAGE
#define EXCHANGEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeRequestMessage : public NetworkInterface {
public:
    int exchangeType = 0;
    unsigned int protocolId = 8540;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeRequestMessage(ICustomDataInput &input);

    void _exchangeTypeFunc(ICustomDataInput &input);
};

#endif