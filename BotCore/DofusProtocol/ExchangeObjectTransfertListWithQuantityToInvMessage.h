#ifndef EXCHANGEOBJECTTRANSFERTLISTWITHQUANTITYTOINVMESSAGE
#define EXCHANGEOBJECTTRANSFERTLISTWITHQUANTITYTOINVMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeObjectTransfertListWithQuantityToInvMessage : public NetworkInterface {
public:
    std::vector<unsigned int> ids;
    std::vector<unsigned int> qtys;
    unsigned int protocolId = 3632;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeObjectTransfertListWithQuantityToInvMessage(ICustomDataInput &input);

    void _idsFunc(ICustomDataInput &input);

    void _qtysFunc(ICustomDataInput &input);
};

#endif