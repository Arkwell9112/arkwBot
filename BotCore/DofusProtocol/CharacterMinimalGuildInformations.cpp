#include "CharacterMinimalGuildInformations.h"

void CharacterMinimalGuildInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterMinimalGuildInformations(input);
}

void CharacterMinimalGuildInformations::deserializeAs_CharacterMinimalGuildInformations(ICustomDataInput &input) {
    CharacterMinimalPlusLookInformations::deserialize(input);
    this->guild.deserialize(input);
}

