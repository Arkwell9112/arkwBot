#ifndef EXCHANGEOBJECTTRANSFERTLISTTOINVMESSAGE
#define EXCHANGEOBJECTTRANSFERTLISTTOINVMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeObjectTransfertListToInvMessage : public NetworkInterface {
public:
    std::vector<unsigned int> ids;
    unsigned int protocolId = 1459;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectTransfertListToInvMessage(ICustomDataInput &input);

    void _idsFunc(ICustomDataInput &input);
};

#endif