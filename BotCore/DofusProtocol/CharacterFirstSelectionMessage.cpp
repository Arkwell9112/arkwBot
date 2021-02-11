#include "CharacterFirstSelectionMessage.h"

void CharacterFirstSelectionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterFirstSelectionMessage(input);
}

void CharacterFirstSelectionMessage::deserializeAs_CharacterFirstSelectionMessage(ICustomDataInput &input) {
    CharacterSelectionMessage::deserialize(input);
    this->_doTutorialFunc(input);
}

void CharacterFirstSelectionMessage::_doTutorialFunc(ICustomDataInput &input) {
    this->doTutorial = input.readBoolean();
}

