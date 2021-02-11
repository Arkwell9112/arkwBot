#ifndef EXCHANGESELLOKMESSAGE
#define EXCHANGESELLOKMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeSellOkMessage : public NetworkInterface {
public:
    unsigned int protocolId = 7488;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeSellOkMessage(ICustomDataInput &input);
};

#endif