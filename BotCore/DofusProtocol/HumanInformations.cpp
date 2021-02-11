#include "../ProtocolTypeManager.h"
#include "HumanInformations.h"

void HumanInformations::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HumanInformations(input);
}

void HumanInformations::deserializeAs_HumanInformations(ICustomDataInput &input) {
    unsigned int _id3 = 0;
    HumanOption _item3;
    this->restrictions.deserialize(input);
    this->_sexFunc(input);
    unsigned int _optionsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _optionsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<HumanOption>(input, _id3);
        this->options.push_back(_item3);
    }
}

void HumanInformations::_sexFunc(ICustomDataInput &input) {
    this->sex = input.readBoolean();
}

void HumanInformations::_optionsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    HumanOption _item = ProtocolTypeManager::getObject<HumanOption>(input, _id);
    _item.deserialize(input);
    this->options.push_back(_item);
}

