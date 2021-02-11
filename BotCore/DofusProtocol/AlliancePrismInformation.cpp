#include "AlliancePrismInformation.h"

void AlliancePrismInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AlliancePrismInformation(input);
}

void AlliancePrismInformation::deserializeAs_AlliancePrismInformation(ICustomDataInput &input) {
    PrismInformation::deserialize(input);
    this->alliance.deserialize(input);
}

