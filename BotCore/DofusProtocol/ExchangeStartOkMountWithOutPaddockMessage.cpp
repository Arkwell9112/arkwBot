#include "ExchangeStartOkMountWithOutPaddockMessage.h"

void ExchangeStartOkMountWithOutPaddockMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkMountWithOutPaddockMessage(input);
}

void ExchangeStartOkMountWithOutPaddockMessage::deserializeAs_ExchangeStartOkMountWithOutPaddockMessage(
        ICustomDataInput &input) {
    MountClientData _item1;
    unsigned int _stabledMountsDescriptionLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _stabledMountsDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->stabledMountsDescription.push_back(_item1);
    }
}

void ExchangeStartOkMountWithOutPaddockMessage::_stabledMountsDescriptionFunc(ICustomDataInput &input) {
    MountClientData _item;
    _item.deserialize(input);
    this->stabledMountsDescription.push_back(_item);
}

