#include "ShortcutSmiley.h"

void ShortcutSmiley::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutSmiley(input);
}

void ShortcutSmiley::deserializeAs_ShortcutSmiley(ICustomDataInput &input) {
    Shortcut::deserialize(input);
    this->_smileyIdFunc(input);
}

void ShortcutSmiley::_smileyIdFunc(ICustomDataInput &input) {
    this->smileyId = input.readVarUhShort();

}

