#ifndef EXCHANGESTARTASVENDORMESSAGE
#define EXCHANGESTARTASVENDORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeStartAsVendorMessage : public NetworkInterface {
public:
    unsigned int protocolId = 5821;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartAsVendorMessage(ICustomDataInput &input);
};

#endif