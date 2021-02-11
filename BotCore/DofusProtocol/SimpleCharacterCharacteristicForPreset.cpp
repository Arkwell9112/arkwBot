#include "SimpleCharacterCharacteristicForPreset.h"

void SimpleCharacterCharacteristicForPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SimpleCharacterCharacteristicForPreset(input);
}

void
SimpleCharacterCharacteristicForPreset::deserializeAs_SimpleCharacterCharacteristicForPreset(ICustomDataInput &input) {
    this->_keywordFunc(input);
    this->_baseFunc(input);
    this->_additionnalFunc(input);
}

void SimpleCharacterCharacteristicForPreset::_keywordFunc(ICustomDataInput &input) {
    this->keyword = input.readUTF();
}

void SimpleCharacterCharacteristicForPreset::_baseFunc(ICustomDataInput &input) {
    this->base = input.readVarShort();
}

void SimpleCharacterCharacteristicForPreset::_additionnalFunc(ICustomDataInput &input) {
    this->additionnal = input.readVarShort();
}

