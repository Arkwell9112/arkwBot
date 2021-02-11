#ifndef PRISMMODULEEXCHANGEREQUESTMESSAGE
#define PRISMMODULEEXCHANGEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "ExchangeRequestMessage.h"

class PrismModuleExchangeRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5643;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismModuleExchangeRequestMessage(ICustomDataInput &input);
};

#endif