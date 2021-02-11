#include "../ProtocolTypeManager.h"
#include "PresetsMessage.h"

void PresetsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetsMessage(input);
}

void PresetsMessage::deserializeAs_PresetsMessage(ICustomDataInput &input) {
    unsigned int _id1 = 0;
    Preset _item1;
    unsigned int _presetsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _presetsLen; _i1++) {
        _id1 = input.readUnsignedShort();
        _item1 = ProtocolTypeManager::getObject<Preset>(input, _id1);
        this->presets.push_back(_item1);
    }
}

void PresetsMessage::_presetsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    Preset _item = ProtocolTypeManager::getObject<Preset>(input, _id);
    _item.deserialize(input);
    this->presets.push_back(_item);
}

