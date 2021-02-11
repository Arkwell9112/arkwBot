#include "CharacterNameSuggestionFailureMessage.h"

void CharacterNameSuggestionFailureMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterNameSuggestionFailureMessage(input);
}

void
CharacterNameSuggestionFailureMessage::deserializeAs_CharacterNameSuggestionFailureMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void CharacterNameSuggestionFailureMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

