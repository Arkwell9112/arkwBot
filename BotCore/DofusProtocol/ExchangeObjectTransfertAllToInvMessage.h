#ifndef EXCHANGEOBJECTTRANSFERTALLTOINVMESSAGE
#define EXCHANGEOBJECTTRANSFERTALLTOINVMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeObjectTransfertAllToInvMessage : public NetworkInterface {
public:
    unsigned int protocolId = 138;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectTransfertAllToInvMessage(ICustomDataInput &input);
};

#endif