#include "../IO/BooleanByteWrapper.h"
#include "FightOptionsInformations.h"

void FightOptionsInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_FightOptionsInformations(input);
}

void FightOptionsInformations::deserializeAs_FightOptionsInformations(ICustomDataInput &input) {
    this->deserializeByteBoxes(input);
}

void FightOptionsInformations::deserializeByteBoxes(ICustomDataInput &input) {
    unsigned int _box0 = input.readByte();
    this->isSecret = BooleanByteWrapper::getFlag(_box0, 0);
    this->isRestrictedToPartyOnly = BooleanByteWrapper::getFlag(_box0, 1);
    this->isClosed = BooleanByteWrapper::getFlag(_box0, 2);
    this->isAskingForHelp = BooleanByteWrapper::getFlag(_box0, 3);
}

