#ifndef EXCHANGEOBJECTTRANSFERTEXISTINGTOINVMESSAGE
#define EXCHANGEOBJECTTRANSFERTEXISTINGTOINVMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeObjectTransfertExistingToInvMessage : public NetworkInterface {
public:
    unsigned int protocolId = 4820;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectTransfertExistingToInvMessage(ICustomDataInput &input);
};

#endif