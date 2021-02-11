#include "ForgettableSpellListUpdateMessage.h"

void ForgettableSpellListUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ForgettableSpellListUpdateMessage(input);
}

void ForgettableSpellListUpdateMessage::deserializeAs_ForgettableSpellListUpdateMessage(ICustomDataInput &input) {
    ForgettableSpellItem _item2;
    this->_actionFunc(input);
    unsigned int _spellsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _spellsLen; _i2++) {
        _item2.deserialize(input);
        this->spells.push_back(_item2);
    }
}

void ForgettableSpellListUpdateMessage::_actionFunc(ICustomDataInput &input) {
    this->action = input.readByte();

}

void ForgettableSpellListUpdateMessage::_spellsFunc(ICustomDataInput &input) {
    ForgettableSpellItem _item;
    _item.deserialize(input);
    this->spells.push_back(_item);
}

