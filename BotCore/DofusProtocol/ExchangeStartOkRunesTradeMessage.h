#ifndef EXCHANGESTARTOKRUNESTRADEMESSAGE
#define EXCHANGESTARTOKRUNESTRADEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartOkRunesTradeMessage : public NetworkInterface {
public:
    unsigned int protocolId = 1494;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkRunesTradeMessage(ICustomDataInput &input);
};

#endif