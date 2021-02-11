#include "../ProtocolTypeManager.h"
#include "PresetSavedMessage.h"

void PresetSavedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetSavedMessage(input);
}

void PresetSavedMessage::deserializeAs_PresetSavedMessage(ICustomDataInput &input) {
    this->_presetIdFunc(input);
    unsigned int _id2 = input.readUnsignedShort();
    this->preset = ProtocolTypeManager::getObject<Preset>(input, _id2);
}

void PresetSavedMessage::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

