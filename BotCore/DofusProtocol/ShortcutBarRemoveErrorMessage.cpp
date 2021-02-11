#include "ShortcutBarRemoveErrorMessage.h"

void ShortcutBarRemoveErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarRemoveErrorMessage(input);
}

void ShortcutBarRemoveErrorMessage::deserializeAs_ShortcutBarRemoveErrorMessage(ICustomDataInput &input) {
    this->_errorFunc(input);
}

void ShortcutBarRemoveErrorMessage::_errorFunc(ICustomDataInput &input) {
    this->error = input.readByte();

}

