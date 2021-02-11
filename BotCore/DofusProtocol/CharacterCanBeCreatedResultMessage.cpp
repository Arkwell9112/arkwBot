#include "CharacterCanBeCreatedResultMessage.h"

void CharacterCanBeCreatedResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterCanBeCreatedResultMessage(input);
}

void CharacterCanBeCreatedResultMessage::deserializeAs_CharacterCanBeCreatedResultMessage(ICustomDataInput &input) {
    this->_yesYouCanFunc(input);
}

void CharacterCanBeCreatedResultMessage::_yesYouCanFunc(ICustomDataInput &input) {
    this->yesYouCan = input.readBoolean();
}

