#include "CharacterCharacteristicForPreset.h"

void CharacterCharacteristicForPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterCharacteristicForPreset(input);
}

void CharacterCharacteristicForPreset::deserializeAs_CharacterCharacteristicForPreset(ICustomDataInput &input) {
    SimpleCharacterCharacteristicForPreset::deserialize(input);
    this->_stuffFunc(input);
}

void CharacterCharacteristicForPreset::_stuffFunc(ICustomDataInput &input) {
    this->stuff = input.readVarShort();
}

