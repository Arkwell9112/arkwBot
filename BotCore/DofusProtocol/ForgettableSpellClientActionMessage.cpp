#include "ForgettableSpellClientActionMessage.h"

void ForgettableSpellClientActionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ForgettableSpellClientActionMessage(input);
}

void ForgettableSpellClientActionMessage::deserializeAs_ForgettableSpellClientActionMessage(ICustomDataInput &input) {
    this->_spellIdFunc(input);
    this->_actionFunc(input);
}

void ForgettableSpellClientActionMessage::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readInt();

}

void ForgettableSpellClientActionMessage::_actionFunc(ICustomDataInput &input) {
    this->action = input.readByte();

}

