#include "CharactersListMessage.h"

void CharactersListMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharactersListMessage(input);
}

void CharactersListMessage::deserializeAs_CharactersListMessage(ICustomDataInput &input) {
    BasicCharactersListMessage::deserialize(input);
    this->_hasStartupActionsFunc(input);
}

void CharactersListMessage::_hasStartupActionsFunc(ICustomDataInput &input) {
    this->hasStartupActions = input.readBoolean();
}

