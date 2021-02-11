#include "CharacterMinimalPlusLookInformations.h"

void CharacterMinimalPlusLookInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterMinimalPlusLookInformations(input);
}

void CharacterMinimalPlusLookInformations::deserializeAs_CharacterMinimalPlusLookInformations(ICustomDataInput &input) {
    CharacterMinimalInformations::deserialize(input);
    this->entityLook.deserialize(input);
    this->_breedFunc(input);
}

void CharacterMinimalPlusLookInformations::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();
}

