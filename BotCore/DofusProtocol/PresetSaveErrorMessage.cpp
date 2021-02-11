#include "PresetSaveErrorMessage.h"

void PresetSaveErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetSaveErrorMessage(input);
}

void PresetSaveErrorMessage::deserializeAs_PresetSaveErrorMessage(ICustomDataInput &input) {
    this->_presetIdFunc(input);
    this->_codeFunc(input);
}

void PresetSaveErrorMessage::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

void PresetSaveErrorMessage::_codeFunc(ICustomDataInput &input) {
    this->code = input.readByte();

}

