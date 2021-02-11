#include "PaddockGuildedInformations.h"

void PaddockGuildedInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockGuildedInformations(input);
}

void PaddockGuildedInformations::deserializeAs_PaddockGuildedInformations(ICustomDataInput &input) {
    PaddockBuyableInformations::deserialize(input);
    this->_desertedFunc(input);
    this->guildInfo.deserialize(input);
}

void PaddockGuildedInformations::_desertedFunc(ICustomDataInput &input) {
    this->deserted = input.readBoolean();
}

