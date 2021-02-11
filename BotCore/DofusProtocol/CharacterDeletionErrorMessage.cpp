#include "CharacterDeletionErrorMessage.h"

void CharacterDeletionErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterDeletionErrorMessage(input);
}

void CharacterDeletionErrorMessage::deserializeAs_CharacterDeletionErrorMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void CharacterDeletionErrorMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

