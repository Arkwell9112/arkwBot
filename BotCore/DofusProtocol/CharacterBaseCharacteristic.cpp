#include "CharacterBaseCharacteristic.h"

void CharacterBaseCharacteristic::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterBaseCharacteristic(input);
}

void CharacterBaseCharacteristic::deserializeAs_CharacterBaseCharacteristic(ICustomDataInput &input) {
    this->_baseFunc(input);
    this->_additionnalFunc(input);
    this->_objectsAndMountBonusFunc(input);
    this->_alignGiftBonusFunc(input);
    this->_contextModifFunc(input);
}

void CharacterBaseCharacteristic::_baseFunc(ICustomDataInput &input) {
    this->base = input.readVarShort();
}

void CharacterBaseCharacteristic::_additionnalFunc(ICustomDataInput &input) {
    this->additionnal = input.readVarShort();
}

void CharacterBaseCharacteristic::_objectsAndMountBonusFunc(ICustomDataInput &input) {
    this->objectsAndMountBonus = input.readVarShort();
}

void CharacterBaseCharacteristic::_alignGiftBonusFunc(ICustomDataInput &input) {
    this->alignGiftBonus = input.readVarShort();
}

void CharacterBaseCharacteristic::_contextModifFunc(ICustomDataInput &input) {
    this->contextModif = input.readVarShort();
}

