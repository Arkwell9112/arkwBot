#include "PresetDeleteResultMessage.h"

void PresetDeleteResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetDeleteResultMessage(input);
}

void PresetDeleteResultMessage::deserializeAs_PresetDeleteResultMessage(ICustomDataInput &input) {
    this->_presetIdFunc(input);
    this->_codeFunc(input);
}

void PresetDeleteResultMessage::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

void PresetDeleteResultMessage::_codeFunc(ICustomDataInput &input) {
    this->code = input.readByte();

}

