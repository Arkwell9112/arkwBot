#include "ShortcutEmote.h"

void ShortcutEmote::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutEmote(input);
}

void ShortcutEmote::deserializeAs_ShortcutEmote(ICustomDataInput &input) {
    Shortcut::deserialize(input);
    this->_emoteIdFunc(input);
}

void ShortcutEmote::_emoteIdFunc(ICustomDataInput &input) {
    this->emoteId = input.readUnsignedByte();

}

