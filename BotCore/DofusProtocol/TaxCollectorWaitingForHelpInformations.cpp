#include "TaxCollectorWaitingForHelpInformations.h"

void TaxCollectorWaitingForHelpInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorWaitingForHelpInformations(input);
}

void
TaxCollectorWaitingForHelpInformations::deserializeAs_TaxCollectorWaitingForHelpInformations(ICustomDataInput &input) {
    TaxCollectorComplementaryInformations::deserialize(input);
    this->waitingForHelpInfo.deserialize(input);
}

