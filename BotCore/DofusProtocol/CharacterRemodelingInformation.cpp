#include "CharacterRemodelingInformation.h"

void CharacterRemodelingInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_CharacterRemodelingInformation(input);
}

void CharacterRemodelingInformation::deserializeAs_CharacterRemodelingInformation(ICustomDataInput &input) {
    int _val5 = 0;
    AbstractCharacterInformation::deserialize(input);
    this->_nameFunc(input);
    this->_breedFunc(input);
    this->_sexFunc(input);
    this->_cosmeticIdFunc(input);
    unsigned int _colorsLen = input.readUnsignedShort();
    for (unsigned int _i5 = 0; _i5 < _colorsLen; _i5++) {
        _val5 = input.readInt();
        this->colors.push_back(_val5);
    }
}

void CharacterRemodelingInformation::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void CharacterRemodelingInformation::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();
}

void CharacterRemodelingInformation::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void CharacterRemodelingInformation::_cosmeticIdFunc(ICustomDataInput &input) {
    this->cosmeticId = input.readVarUhShort();

}

void CharacterRemodelingInformation::_colorsFunc(ICustomDataInput &input) {
    int _val = input.readInt();
    this->colors.push_back(_val);
}

