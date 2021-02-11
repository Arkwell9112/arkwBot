#include "ShortcutBarAddErrorMessage.h"

void ShortcutBarAddErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarAddErrorMessage(input);
}

void ShortcutBarAddErrorMessage::deserializeAs_ShortcutBarAddErrorMessage(ICustomDataInput &input) {
    this->_errorFunc(input);
}

void ShortcutBarAddErrorMessage::_errorFunc(ICustomDataInput &input) {
    this->error = input.readByte();

}

