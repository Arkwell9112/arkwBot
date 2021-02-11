#include "SpellItem.h"

void SpellItem::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpellItem(input);
}

void SpellItem::deserializeAs_SpellItem(ICustomDataInput &input) {
    Item::deserialize(input);
    this->_spellIdFunc(input);
    this->_spellLevelFunc(input);
}

void SpellItem::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readInt();
}

void SpellItem::_spellLevelFunc(ICustomDataInput &input) {
    this->spellLevel = input.readShort();

}

