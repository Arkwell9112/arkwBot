#ifndef EXCHANGEOBJECTTRANSFERTLISTFROMINVMESSAGE
#define EXCHANGEOBJECTTRANSFERTLISTFROMINVMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeObjectTransfertListFromInvMessage : public NetworkInterface {
public:
    std::vector<unsigned int> ids;
    unsigned int protocolId = 372;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectTransfertListFromInvMessage(ICustomDataInput &input);

    void _idsFunc(ICustomDataInput &input);
};

#endif