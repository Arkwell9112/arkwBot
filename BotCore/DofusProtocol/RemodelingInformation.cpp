#include "RemodelingInformation.h"

void RemodelingInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_RemodelingInformation(input);
}

void RemodelingInformation::deserializeAs_RemodelingInformation(ICustomDataInput &input) {
    int _val5 = 0;
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

void RemodelingInformation::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void RemodelingInformation::_breedFunc(ICustomDataInput &input) {
    this->breed = input.readByte();
}

void RemodelingInformation::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void RemodelingInformation::_cosmeticIdFunc(ICustomDataInput &input) {
    this->cosmeticId = input.readVarUhShort();

}

void RemodelingInformation::_colorsFunc(ICustomDataInput &input) {
    int _val = input.readInt();
    this->colors.push_back(_val);
}

