#include "IdolsPreset.h"

void IdolsPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IdolsPreset(input);
}

void IdolsPreset::deserializeAs_IdolsPreset(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    Preset::deserialize(input);
    this->_iconIdFunc(input);
    unsigned int _idolIdsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _idolIdsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->idolIds.push_back(_val2);
    }
}

void IdolsPreset::_iconIdFunc(ICustomDataInput &input) {
    this->iconId = input.readShort();

}

void IdolsPreset::_idolIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->idolIds.push_back(_val);
}

