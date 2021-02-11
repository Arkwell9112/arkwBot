#include "IconPresetSaveRequestMessage.h"

void IconPresetSaveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IconPresetSaveRequestMessage(input);
}

void IconPresetSaveRequestMessage::deserializeAs_IconPresetSaveRequestMessage(ICustomDataInput &input) {
    this->_presetIdFunc(input);
    this->_symbolIdFunc(input);
    this->_updateDataFunc(input);
}

void IconPresetSaveRequestMessage::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

void IconPresetSaveRequestMessage::_symbolIdFunc(ICustomDataInput &input) {
    this->symbolId = input.readByte();

}

void IconPresetSaveRequestMessage::_updateDataFunc(ICustomDataInput &input) {
    this->updateData = input.readBoolean();
}

