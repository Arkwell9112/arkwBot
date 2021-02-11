#include "CharacterSelectionMessage.h"

void CharacterSelectionMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterSelectionMessage(input);
}

void CharacterSelectionMessage::deserializeAs_CharacterSelectionMessage(ICustomDataInput &input) {
    this->_idFunc(input);
}

void CharacterSelectionMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

