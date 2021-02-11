#include "IconNamedPresetSaveRequestMessage.h"

void IconNamedPresetSaveRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IconNamedPresetSaveRequestMessage(input);
}

void IconNamedPresetSaveRequestMessage::deserializeAs_IconNamedPresetSaveRequestMessage(ICustomDataInput &input) {
    IconPresetSaveRequestMessage::deserialize(input);
    this->_nameFunc(input);
    this->_typeFunc(input);
}

void IconNamedPresetSaveRequestMessage::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

void IconNamedPresetSaveRequestMessage::_typeFunc(ICustomDataInput &input) {
    this->type = input.readByte();

}

