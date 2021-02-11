#include "CharacterDeletionRequestMessage.h"

void CharacterDeletionRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterDeletionRequestMessage(input);
}

void CharacterDeletionRequestMessage::deserializeAs_CharacterDeletionRequestMessage(ICustomDataInput &input) {
    this->_characterIdFunc(input);
    this->_secretAnswerHashFunc(input);
}

void CharacterDeletionRequestMessage::_characterIdFunc(ICustomDataInput &input) {
    this->characterId = input.readVarUhLong();

}

void CharacterDeletionRequestMessage::_secretAnswerHashFunc(ICustomDataInput &input) {
    this->secretAnswerHash = input.readUTF();
}

