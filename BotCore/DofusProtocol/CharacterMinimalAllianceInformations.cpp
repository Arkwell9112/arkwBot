#include "CharacterMinimalAllianceInformations.h"

void CharacterMinimalAllianceInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterMinimalAllianceInformations(input);
}

void CharacterMinimalAllianceInformations::deserializeAs_CharacterMinimalAllianceInformations(ICustomDataInput &input) {
    CharacterMinimalGuildInformations::deserialize(input);
    this->alliance.deserialize(input);
}

