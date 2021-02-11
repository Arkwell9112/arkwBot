#include "ForgettableSpellDeleteMessage.h"

void ForgettableSpellDeleteMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ForgettableSpellDeleteMessage(input);
}

void ForgettableSpellDeleteMessage::deserializeAs_ForgettableSpellDeleteMessage(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    this->_reasonFunc(input);
    unsigned int _spellsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _spellsLen; _i2++) {
        _val2 = input.readInt();

        this->spells.push_back(_val2);
    }
}

void ForgettableSpellDeleteMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

void ForgettableSpellDeleteMessage::_spellsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readInt();

    this->spells.push_back(_val);
}

