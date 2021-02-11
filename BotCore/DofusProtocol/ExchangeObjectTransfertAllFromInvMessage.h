#ifndef EXCHANGEOBJECTTRANSFERTALLFROMINVMESSAGE
#define EXCHANGEOBJECTTRANSFERTALLFROMINVMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeObjectTransfertAllFromInvMessage : public NetworkInterface {
public:
    unsigned int protocolId = 3954;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectTransfertAllFromInvMessage(ICustomDataInput &input);
};

#endif