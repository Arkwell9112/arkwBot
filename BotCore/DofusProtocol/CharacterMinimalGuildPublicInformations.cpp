#include "CharacterMinimalGuildPublicInformations.h"

void CharacterMinimalGuildPublicInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterMinimalGuildPublicInformations(input);
}

void CharacterMinimalGuildPublicInformations::deserializeAs_CharacterMinimalGuildPublicInformations(
        ICustomDataInput &input) {
    CharacterMinimalInformations::deserialize(input);
    this->_rankFunc(input);
}

void CharacterMinimalGuildPublicInformations::_rankFunc(ICustomDataInput &input) {
    this->rank = input.readVarUhInt();

}

