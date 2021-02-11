#ifndef TAXCOLLECTORGUILDINFORMATIONS
#define TAXCOLLECTORGUILDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorComplementaryInformations.h"
#include "GuildInformations.h"
#include "BasicGuildInformations.h"

class TaxCollectorGuildInformations : public TaxCollectorComplementaryInformations {
public:
    BasicGuildInformations guild;
    unsigned int protocolId = 1607;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorGuildInformations(ICustomDataInput &input);
};

#endif