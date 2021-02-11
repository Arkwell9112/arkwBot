#include "SpellVariantActivationRequestMessage.h"

void SpellVariantActivationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpellVariantActivationRequestMessage(input);
}

void SpellVariantActivationRequestMessage::deserializeAs_SpellVariantActivationRequestMessage(ICustomDataInput &input) {
    this->_spellIdFunc(input);
}

void SpellVariantActivationRequestMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

