#include "ExchangeMountsStableAddMessage.h"

void ExchangeMountsStableAddMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMountsStableAddMessage(input);
}

void ExchangeMountsStableAddMessage::deserializeAs_ExchangeMountsStableAddMessage(ICustomDataInput &input) {
    MountClientData _item1;
    unsigned int _mountDescriptionLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _mountDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->mountDescription.push_back(_item1);
    }
}

void ExchangeMountsStableAddMessage::_mountDescriptionFunc(ICustomDataInput &input) {
    MountClientData _item;
    _item.deserialize(input);
    this->mountDescription.push_back(_item);
}

