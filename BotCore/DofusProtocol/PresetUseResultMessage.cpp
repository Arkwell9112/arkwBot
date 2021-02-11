#include "PresetUseResultMessage.h"

void PresetUseResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PresetUseResultMessage(input);
}

void PresetUseResultMessage::deserializeAs_PresetUseResultMessage(ICustomDataInput &input) {
    this->_presetIdFunc(input);
    this->_codeFunc(input);
}

void PresetUseResultMessage::_presetIdFunc(ICustomDataInput &input) {
    this->presetId = input.readShort();
}

void PresetUseResultMessage::_codeFunc(ICustomDataInput &input) {
    this->code = input.readByte();

}

