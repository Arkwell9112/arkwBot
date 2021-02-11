#include "../ProtocolTypeManager.h"
#include "PresetsContainerPreset.h"

void PresetsContainerPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetsContainerPreset(input);
}

void PresetsContainerPreset::deserializeAs_PresetsContainerPreset(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    Preset _item1;
    Preset::deserialize(input);
    unsigned int _presetsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _presetsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<Preset>(input, _id1);
        this->presets.push_back(_item1);
    }
}

void PresetsContainerPreset::_presetsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    Preset _item = ProtocolTypeManager::getObject<Preset>(input, _id);
    _item.deserialize(input);
    this->presets.push_back(_item);
}

