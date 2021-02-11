#include "PresetDeleteRequestMessage.h"

void PresetDeleteRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetDeleteRequestMessage(input);
}

void PresetDeleteRequestMessage::deserializeAs_PresetDeleteRequestMessage(ICustomDataInput &input) {
    this->_presetIdFunc(input);
}

void PresetDeleteRequestMessage::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

