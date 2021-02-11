#ifndef EXCHANGEMOUNTSSTABLEBORNADDMESSAGE
#define EXCHANGEMOUNTSSTABLEBORNADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "ExchangeMountsStableAddMessage.h"

class ExchangeMountsStableBornAddMessage : public ExchangeMountsStableAddMessage {
public:
    unsigned int protocolId = 8371;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeMountsStableBornAddMessage(ICustomDataInput &input);
};

#endif