#ifndef EXCHANGESTARTOKCRAFTMESSAGE
#define EXCHANGESTARTOKCRAFTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartOkCraftMessage : public NetworkInterface {
public:
    unsigned int protocolId = 781;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkCraftMessage(ICustomDataInput &input);
};

#endif