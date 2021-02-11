#include "CharacterLevelUpMessage.h"

void CharacterLevelUpMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterLevelUpMessage(input);
}

void CharacterLevelUpMessage::deserializeAs_CharacterLevelUpMessage(ICustomDataInput &input) {
    this->_newLevelFunc(input);
}

void CharacterLevelUpMessage::_newLevelFunc(ICustomDataInput &input) {
    this->newLevel = input.readVarUhShort();

}

