#include "Preset.h"

void Preset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_Preset(input);
}

void Preset::deserializeAs_Preset(ICustomDataInput &input) {
    this->_idFunc(input);
}

void Preset::_idFunc(ICustomDataInput &input) {
    this->id = input.readShort();
}

