#include "TaxCollectorStaticExtendedInformations.h"

void TaxCollectorStaticExtendedInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorStaticExtendedInformations(input);
}

void
TaxCollectorStaticExtendedInformations::deserializeAs_TaxCollectorStaticExtendedInformations(ICustomDataInput &input) {
    TaxCollectorStaticInformations::deserialize(input);
    this->allianceIdentity.deserialize(input);
}

