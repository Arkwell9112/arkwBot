#include "ItemForPresetUpdateMessage.h"

void ItemForPresetUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ItemForPresetUpdateMessage(input);
}

void ItemForPresetUpdateMessage::deserializeAs_ItemForPresetUpdateMessage(ICustomDataInput &input) {
    this->_presetIdFunc(input);
    this->presetItem.deserialize(input);
}

void ItemForPresetUpdateMessage::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

