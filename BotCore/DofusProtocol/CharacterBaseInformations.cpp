#include "CharacterBaseInformations.h"

void CharacterBaseInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterBaseInformations(input);
}

void CharacterBaseInformations::deserializeAs_CharacterBaseInformations(ICustomDataInput &input) {
    CharacterMinimalPlusLookInformations::deserialize(input);
    this->_sexFunc(input);
}

void CharacterBaseInformations::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

