#include "ShortcutBarRemovedMessage.h"

void ShortcutBarRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarRemovedMessage(input);
}

void ShortcutBarRemovedMessage::deserializeAs_ShortcutBarRemovedMessage(ICustomDataInput &input) {
    this->_barTypeFunc(input);
    this->_slotFunc(input);
}

void ShortcutBarRemovedMessage::_barTypeFunc(ICustomDataInput &input) {
    this->barType = input.readByte();

}

void ShortcutBarRemovedMessage::_slotFunc(ICustomDataInput &input) {
    this->slot = input.readByte();

}

