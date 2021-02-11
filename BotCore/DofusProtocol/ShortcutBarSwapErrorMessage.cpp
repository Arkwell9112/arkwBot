#include "ShortcutBarSwapErrorMessage.h"

void ShortcutBarSwapErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutBarSwapErrorMessage(input);
}

void ShortcutBarSwapErrorMessage::deserializeAs_ShortcutBarSwapErrorMessage(ICustomDataInput &input) {
    this->_errorFunc(input);
}

void ShortcutBarSwapErrorMessage::_errorFunc(ICustomDataInput &input) {
    this->error = input.readByte();

}

