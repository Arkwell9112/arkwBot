#include "HouseGuildedInformations.h"

void HouseGuildedInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseGuildedInformations(input);
}

void HouseGuildedInformations::deserializeAs_HouseGuildedInformations(ICustomDataInput &input) {
    HouseInstanceInformations::deserialize(input);
    this->guildInfo.deserialize(input);
}

