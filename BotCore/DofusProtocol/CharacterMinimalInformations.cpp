#include "CharacterMinimalInformations.h"

void CharacterMinimalInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterMinimalInformations(input);
}

void CharacterMinimalInformations::deserializeAs_CharacterMinimalInformations(ICustomDataInput &input) {
    CharacterBasicMinimalInformations::deserialize(input);
    this->_levelFunc(input);
}

void CharacterMinimalInformations::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

