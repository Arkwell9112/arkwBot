#ifndef TAXCOLLECTORWAITINGFORHELPINFORMATIONS
#define TAXCOLLECTORWAITINGFORHELPINFORMATIONS

#include "../IO/ICustomDataInput.h"
#include "TaxCollectorComplementaryInformations.h"
#include "ProtectedEntityWaitingForHelpInfo.h"

class TaxCollectorWaitingForHelpInformations : public TaxCollectorComplementaryInformations {
public:
    ProtectedEntityWaitingForHelpInfo waitingForHelpInfo;
    unsigned int protocolId = 7974;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_TaxCollectorWaitingForHelpInformations(ICustomDataInput &input);
};

#endif