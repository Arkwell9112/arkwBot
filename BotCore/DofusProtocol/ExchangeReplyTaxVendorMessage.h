#ifndef EXCHANGEREPLYTAXVENDORMESSAGE
#define EXCHANGEREPLYTAXVENDORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class ExchangeReplyTaxVendorMessage : public NetworkInterface {
public:
    double objectValue = 0;
    double totalTaxValue = 0;
    unsigned int protocolId = 9941;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeReplyTaxVendorMessage(ICustomDataInput &input);

    void _objectValueFunc(ICustomDataInput &input);

    void _totalTaxValueFunc(ICustomDataInput &input);
};

#endif