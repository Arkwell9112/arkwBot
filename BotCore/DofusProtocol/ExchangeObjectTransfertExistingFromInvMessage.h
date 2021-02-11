#ifndef EXCHANGEOBJECTTRANSFERTEXISTINGFROMINVMESSAGE
#define EXCHANGEOBJECTTRANSFERTEXISTINGFROMINVMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeObjectTransfertExistingFromInvMessage : public NetworkInterface {
public:
    unsigned int protocolId = 6949;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectTransfertExistingFromInvMessage(ICustomDataInput &input);
};

#endif