#include "Shortcut.h"

void Shortcut::deserialize(ICustomDataInput &input) {
    this->deserializeAs_Shortcut(input);
}

void Shortcut::deserializeAs_Shortcut(ICustomDataInput &input) {
    this->_slotFunc(input);
}

void Shortcut::_slotFunc(ICustomDataInput &input) {
    this->slot = input.readByte();

}

