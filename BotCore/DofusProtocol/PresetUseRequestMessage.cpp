#include "PresetUseRequestMessage.h"

void PresetUseRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetUseRequestMessage(input);
}

void PresetUseRequestMessage::deserializeAs_PresetUseRequestMessage(ICustomDataInput &input) {
    this->_presetIdFunc(input);
}

void PresetUseRequestMessage::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

