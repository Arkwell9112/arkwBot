#ifndef TAXCOLLECTORLISTMESSAGE
#define TAXCOLLECTORLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "TaxCollectorFightersInformation.h"
#include "AbstractTaxCollectorListMessage.h"

class TaxCollectorListMessage : public AbstractTaxCollectorListMessage {
public:
    unsigned int nbcollectorMax = 0;
    std::vector<TaxCollectorFightersInformation> fightersInformations;
    unsigned int infoType = 0;
    unsigned int protocolId = 1516;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorListMessage(ICustomDataInput &input);

    void _nbcollectorMaxFunc(ICustomDataInput &input);

    void _fightersInformationsFunc(ICustomDataInput &input);

    void _infoTypeFunc(ICustomDataInput &input);
};

#endif