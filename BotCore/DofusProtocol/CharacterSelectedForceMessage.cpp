#include "CharacterSelectedForceMessage.h"

void CharacterSelectedForceMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterSelectedForceMessage(input);
}

void CharacterSelectedForceMessage::deserializeAs_CharacterSelectedForceMessage(ICustomDataInput &input) {
    this->_idFunc(input);
}

void CharacterSelectedForceMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readInt();

}

