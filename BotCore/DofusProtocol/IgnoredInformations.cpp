#include "IgnoredInformations.h"

void IgnoredInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IgnoredInformations(input);
}

void IgnoredInformations::deserializeAs_IgnoredInformations(ICustomDataInput &input) {
    AbstractContactInformations::deserialize(input);
}

