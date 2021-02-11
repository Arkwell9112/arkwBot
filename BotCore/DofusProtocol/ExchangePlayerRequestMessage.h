#ifndef EXCHANGEPLAYERREQUESTMESSAGE
#define EXCHANGEPLAYERREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeRequestMessage.h"

class ExchangePlayerRequestMessage : public ExchangeRequestMessage {
public:
    double target = 0;
    unsigned int protocolId = 3334;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangePlayerRequestMessage(ICustomDataInput &input);

    void _targetFunc(ICustomDataInput &input);
};

#endif