#ifndef EXCHANGEREQUESTONTAXCOLLECTORMESSAGE
#define EXCHANGEREQUESTONTAXCOLLECTORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeRequestOnTaxCollectorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 8763;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeRequestOnTaxCollectorMessage(ICustomDataInput &input);
};

#endif