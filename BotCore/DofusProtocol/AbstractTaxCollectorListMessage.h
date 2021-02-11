#ifndef ABSTRACTTAXCOLLECTORLISTMESSAGE
#define ABSTRACTTAXCOLLECTORLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "TaxCollectorInformations.h"

class AbstractTaxCollectorListMessage : public NetworkInterface {
public:
    std::vector<TaxCollectorInformations> informations;
    unsigned int protocolId = 8679;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AbstractTaxCollectorListMessage(ICustomDataInput &input);

    void _informationsFunc(ICustomDataInput &input);
};

#endif