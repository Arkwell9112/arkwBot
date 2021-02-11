#include "CharacterSpellModification.h"

void CharacterSpellModification::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterSpellModification(input);
}

void CharacterSpellModification::deserializeAs_CharacterSpellModification(ICustomDataInput &input) {
    this->_modificationTypeFunc(input);
    this->_spellIdFunc(input);
    this->value.deserialize(input);
}

void CharacterSpellModification::_modificationTypeFunc(ICustomDataInput &input) {
    this->modificationType = input.readByte();

}

void CharacterSpellModification::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

