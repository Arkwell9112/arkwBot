#include "IconNamedPreset.h"

void IconNamedPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_IconNamedPreset(input);
}

void IconNamedPreset::deserializeAs_IconNamedPreset(ICustomDataInput &input) {
    PresetsContainerPreset::deserialize(input);
    this->_iconIdFunc(input);
    this->_nameFunc(input);
}

void IconNamedPreset::_iconIdFunc(ICustomDataInput &input) {
    this->iconId = input.readShort();

}

void IconNamedPreset::_nameFunc(ICustomDataInput &input) {
    this->name = input.readUTF();
}

