#include "ShortcutBarSwapRequestMessage.h"

void ShortcutBarSwapRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarSwapRequestMessage(input);
}

void ShortcutBarSwapRequestMessage::deserializeAs_ShortcutBarSwapRequestMessage(ICustomDataInput &input) {
    this->_barTypeFunc(input);
    this->_firstSlotFunc(input);
    this->_secondSlotFunc(input);
}

void ShortcutBarSwapRequestMessage::_barTypeFunc(ICustomDataInput &input) {
    this->barType = input.readByte();

}

void ShortcutBarSwapRequestMessage::_firstSlotFunc(ICustomDataInput &input) {
    this->firstSlot = input.readByte();

}

void ShortcutBarSwapRequestMessage::_secondSlotFunc(ICustomDataInput &input) {
    this->secondSlot = input.readByte();

}

