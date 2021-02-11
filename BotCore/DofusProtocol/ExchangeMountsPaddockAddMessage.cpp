#include "ExchangeMountsPaddockAddMessage.h"

void ExchangeMountsPaddockAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMountsPaddockAddMessage(input);
}

void ExchangeMountsPaddockAddMessage::deserializeAs_ExchangeMountsPaddockAddMessage(ICustomDataInput &input) {
    MountClientData _item1;
    unsigned int _mountDescriptionLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _mountDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->mountDescription.push_back(_item1);
    }
}

void ExchangeMountsPaddockAddMessage::_mountDescriptionFunc(ICustomDataInput &input) {
    MountClientData _item;
    _item.deserialize(input);
    this->mountDescription.push_back(_item);
}

