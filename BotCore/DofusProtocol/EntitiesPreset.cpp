#include "EntitiesPreset.h"

void EntitiesPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_EntitiesPreset(input);
}

void EntitiesPreset::deserializeAs_EntitiesPreset(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    Preset::deserialize(input);
    this->_iconIdFunc(input);
    unsigned int _entityIdsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _entityIdsLen; _i2++) {
        _val2 = input.readVarUhShort();

        this->entityIds.push_back(_val2);
    }
}

void EntitiesPreset::_iconIdFunc(ICustomDataInput &input) {
    this->iconId = input.readShort();

}

void EntitiesPreset::_entityIdsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->entityIds.push_back(_val);
}

