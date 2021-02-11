#ifndef ALLIANCEPRISMINFORMATION
#define ALLIANCEPRISMINFORMATION

#include "../IO/ICustomDataInput.h"
#include "AllianceInformations.h"
#include "PrismInformation.h"

class AlliancePrismInformation : public PrismInformation {
public:
    AllianceInformations alliance;
    unsigned int protocolId = 1451;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AlliancePrismInformation(ICustomDataInput &input);
};

#endif