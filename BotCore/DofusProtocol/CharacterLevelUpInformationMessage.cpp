#include "CharacterLevelUpInformationMessage.h"

void CharacterLevelUpInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterLevelUpInformationMessage(input);
}

void CharacterLevelUpInformationMessage::deserializeAs_CharacterLevelUpInformationMessage(ICustomDataInput &input) {
    CharacterLevelUpMessage::deserialize(input);
    this->_nameFunc(input);
    this->_idFunc(input);
}

void CharacterLevelUpInformationMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void CharacterLevelUpInformationMessage::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhLong();

}

