#include "CharacterToRemodelInformations.h"

void CharacterToRemodelInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterToRemodelInformations(input);
}

void CharacterToRemodelInformations::deserializeAs_CharacterToRemodelInformations(ICustomDataInput &input) {
    CharacterRemodelingInformation::deserialize(input);
    this->_possibleChangeMaskFunc(input);
    this->_mandatoryChangeMaskFunc(input);
}

void CharacterToRemodelInformations::_possibleChangeMaskFunc(ICustomDataInput &input) {
    this->possibleChangeMask = input.readByte();

}

void CharacterToRemodelInformations::_mandatoryChangeMaskFunc(ICustomDataInput &input) {
    this->mandatoryChangeMask = input.readByte();

}

