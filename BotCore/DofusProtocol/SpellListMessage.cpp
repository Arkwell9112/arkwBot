#include "SpellListMessage.h"

void SpellListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpellListMessage(input);
}

void SpellListMessage::deserializeAs_SpellListMessage(ICustomDataInput &input) {
    SpellItem _item2;
    this->_spellPrevisualizationFunc(input);
    unsigned int _spellsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _spellsLen; _i2++) {
        _item2.deserialize(input);
        this->spells.push_back(_item2);
    }
}

void SpellListMessage::_spellPrevisualizationFunc(ICustomDataInput &input) {
    this->spellPrevisualization = input.readBoolean();
}

void SpellListMessage::_spellsFunc(ICustomDataInput &input) {
    SpellItem _item;
    _item.deserialize(input);
    this->spells.push_back(_item);
}

