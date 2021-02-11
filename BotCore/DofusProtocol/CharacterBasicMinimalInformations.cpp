#include "CharacterBasicMinimalInformations.h"

void CharacterBasicMinimalInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterBasicMinimalInformations(input);
}

void CharacterBasicMinimalInformations::deserializeAs_CharacterBasicMinimalInformations(ICustomDataInput &input) {
    AbstractCharacterInformation::deserialize(input);
    this->_nameFunc(input);
}

void CharacterBasicMinimalInformations::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

