#include "CharacterCreationResultMessage.h"

void CharacterCreationResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterCreationResultMessage(input);
}

void CharacterCreationResultMessage::deserializeAs_CharacterCreationResultMessage(ICustomDataInput &input) {
    this->_resultFunc(input);
}

void CharacterCreationResultMessage::_resultFunc(ICustomDataInput &input) {
    this->result = input.readByte();

}

