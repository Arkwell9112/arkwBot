#include "AllianceInformations.h"

void AllianceInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AllianceInformations(input);
}

void AllianceInformations::deserializeAs_AllianceInformations(ICustomDataInput &input) {
    BasicNamedAllianceInformations::deserialize(input);
    this->allianceEmblem.deserialize(input);
}

