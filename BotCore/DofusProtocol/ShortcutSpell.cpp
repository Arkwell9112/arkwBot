#include "ShortcutSpell.h"

void ShortcutSpell::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutSpell(input);
}

void ShortcutSpell::deserializeAs_ShortcutSpell(ICustomDataInput &input) {
    Shortcut::deserialize(input);
    this->_spellIdFunc(input);
}

void ShortcutSpell::_spellIdFunc(ICustomDataInput &input) {
    this->spellId = input.readVarUhShort();

}

