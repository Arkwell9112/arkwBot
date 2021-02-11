#include "CharacterNameSuggestionSuccessMessage.h"

void CharacterNameSuggestionSuccessMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterNameSuggestionSuccessMessage(input);
}

void
CharacterNameSuggestionSuccessMessage::deserializeAs_CharacterNameSuggestionSuccessMessage(ICustomDataInput &input) {
    this->_suggestionFunc(input);
}

void CharacterNameSuggestionSuccessMessage::_suggestionFunc(ICustomDataInput &input) {
    this->suggestion = input.readUTF();
}

