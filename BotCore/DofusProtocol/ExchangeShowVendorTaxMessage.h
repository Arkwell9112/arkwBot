#ifndef EXCHANGESHOWVENDORTAXMESSAGE
#define EXCHANGESHOWVENDORTAXMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeShowVendorTaxMessage : public NetworkInterface {
public:
    unsigned int protocolId = 2219;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeShowVendorTaxMessage(ICustomDataInput &input);
};

#endif