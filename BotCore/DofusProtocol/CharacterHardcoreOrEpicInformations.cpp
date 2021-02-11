#include "CharacterHardcoreOrEpicInformations.h"

void CharacterHardcoreOrEpicInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterHardcoreOrEpicInformations(input);
}

void CharacterHardcoreOrEpicInformations::deserializeAs_CharacterHardcoreOrEpicInformations(ICustomDataInput &input) {
    CharacterBaseInformations::deserialize(input);
    this->_deathStateFunc(input);
    this->_deathCountFunc(input);
    this->_deathMaxLevelFunc(input);
}

void CharacterHardcoreOrEpicInformations::_deathStateFunc(ICustomDataInput &input) {
    this->deathState = input.readByte();

}

void CharacterHardcoreOrEpicInformations::_deathCountFunc(ICustomDataInput &input) {
    this->deathCount = input.readVarUhShort();

}

void CharacterHardcoreOrEpicInformations::_deathMaxLevelFunc(ICustomDataInput &input) {
    this->deathMaxLevel = input.readVarUhShort();

}

