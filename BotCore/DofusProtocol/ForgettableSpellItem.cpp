#include "ForgettableSpellItem.h"

void ForgettableSpellItem::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ForgettableSpellItem(input);
}

void ForgettableSpellItem::deserializeAs_ForgettableSpellItem(ICustomDataInput &input) {
    SpellItem::deserialize(input);
    this->_availableFunc(input);
}

void ForgettableSpellItem::_availableFunc(ICustomDataInput &input) {
    this->available = input.readBoolean();
}

