#ifndef TAXCOLLECTORCOMPLEMENTARYINFORMATIONS
#define TAXCOLLECTORCOMPLEMENTARYINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class TaxCollectorComplementaryInformations : public NetworkInterface {
public:
    unsigned int protocolId = 9776;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorComplementaryInformations(ICustomDataInput &input);
};

#endif