#include "ShortcutBarRemoveRequestMessage.h"

void ShortcutBarRemoveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarRemoveRequestMessage(input);
}

void ShortcutBarRemoveRequestMessage::deserializeAs_ShortcutBarRemoveRequestMessage(ICustomDataInput &input) {
    this->_barTypeFunc(input);
    this->_slotFunc(input);
}

void ShortcutBarRemoveRequestMessage::_barTypeFunc(ICustomDataInput &input) {
    this->barType = input.readByte();

}

void ShortcutBarRemoveRequestMessage::_slotFunc(ICustomDataInput &input) {
    this->slot = input.readByte();

}

