#include "SpellVariantActivationMessage.h"

void SpellVariantActivationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpellVariantActivationMessage(input);
}

void SpellVariantActivationMessage::deserializeAs_SpellVariantActivationMessage(ICustomDataInput &input) {
    this->_spellIdFunc(input);
    this->_resultFunc(input);
}

void SpellVariantActivationMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

void SpellVariantActivationMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readBoolean();
}

