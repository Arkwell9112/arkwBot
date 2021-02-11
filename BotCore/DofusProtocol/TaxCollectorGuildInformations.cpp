#include "TaxCollectorGuildInformations.h"

void TaxCollectorGuildInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_TaxCollectorGuildInformations(input);
}

void TaxCollectorGuildInformations::deserializeAs_TaxCollectorGuildInformations(ICustomDataInput &input) {
    TaxCollectorComplementaryInformations::deserialize(input);
    this->guild.deserialize(input);
}

