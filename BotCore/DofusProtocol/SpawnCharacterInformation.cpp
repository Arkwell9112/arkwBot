#include "SpawnCharacterInformation.h"

void SpawnCharacterInformation::deserialize(ICustomDataInput &input) {
    this->deserializeAs_SpawnCharacterInformation(input);
}

void SpawnCharacterInformation::deserializeAs_SpawnCharacterInformation(ICustomDataInput &input) {
    SpawnInformation::deserialize(input);
    this->_nameFunc(input);
    this->_levelFunc(input);
}

void SpawnCharacterInformation::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void SpawnCharacterInformation::_levelFunc(ICustomDataInput &input) {
    this->level = input.readVarUhShort();

}

