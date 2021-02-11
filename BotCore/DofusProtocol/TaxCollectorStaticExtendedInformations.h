#ifndef TAXCOLLECTORSTATICEXTENDEDINFORMATIONS
#define TAXCOLLECTORSTATICEXTENDEDINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "AllianceInformations.h"
#include "TaxCollectorStaticInformations.h"

class TaxCollectorStaticExtendedInformations : public TaxCollectorStaticInformations {
public:
    AllianceInformations allianceIdentity;
    unsigned int protocolId = 5888;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorStaticExtendedInformations(ICustomDataInput &input);
};

#endif