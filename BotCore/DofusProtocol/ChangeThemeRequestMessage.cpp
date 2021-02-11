#include "ChangeThemeRequestMessage.h"

void ChangeThemeRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ChangeThemeRequestMessage(input);
}

void ChangeThemeRequestMessage::deserializeAs_ChangeThemeRequestMessage(ICustomDataInput &input) {
    this->_themeFunc(input);
}

void ChangeThemeRequestMessage::_themeFunc(ICustomDataInput &input) {
    this->theme = input.readByte();
}

