#ifndef EXCHANGEOBJECTMESSAGE
#define EXCHANGEOBJECTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeObjectMessage : public NetworkInterface {
public:
    bool remote = false;
    unsigned int protocolId = 4554;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectMessage(ICustomDataInput &input);

    void _remoteFunc(ICustomDataInput &input);
};

#endif