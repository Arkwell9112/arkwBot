#ifndef EXCHANGEREQUESTEDTRADEMESSAGE
#define EXCHANGEREQUESTEDTRADEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeRequestedMessage.h"

class ExchangeRequestedTradeMessage : public ExchangeRequestedMessage {
public:
    double source = 0;
    double target = 0;
    unsigned int protocolId = 8119;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeRequestedTradeMessage(ICustomDataInput &input);

    void _sourceFunc(ICustomDataInput &input);

    void _targetFunc(ICustomDataInput &input);
};

#endif