#include "CharacterCreationRequestMessage.h"

void CharacterCreationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterCreationRequestMessage(input);
}

void CharacterCreationRequestMessage::deserializeAs_CharacterCreationRequestMessage(ICustomDataInput &input) {
    this->_nameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    for (unsigned int _i4 = 0; _i4 < 5; _i4++) {
        this->colors.push_back(input.readInt());
    }
    this->_cosmeticIdFunc(input);
}

void CharacterCreationRequestMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void CharacterCreationRequestMessage::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();

}

void CharacterCreationRequestMessage::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void CharacterCreationRequestMessage::_cosmeticIdFunc(ICustomDataInput &input) {
    this->cosmeticId = input.readVarUhShort();

}

