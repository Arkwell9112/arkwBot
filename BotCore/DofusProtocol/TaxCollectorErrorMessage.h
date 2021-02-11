#ifndef TAXCOLLECTORERRORMESSAGE
#define TAXCOLLECTORERRORMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TaxCollectorErrorMessage : public NetworkInterface {
public:
    int reason = 0;
    unsigned int protocolId = 243;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorErrorMessage(ICustomDataInput &input);

    void _reasonFunc(ICustomDataInput &input);
};

#endif