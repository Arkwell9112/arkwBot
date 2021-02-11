#include "ExchangeStartOkMountMessage.h"

void ExchangeStartOkMountMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkMountMessage(input);
}

void ExchangeStartOkMountMessage::deserializeAs_ExchangeStartOkMountMessage(ICustomDataInput &input) {
    MountClientData _item1;
    ExchangeStartOkMountWithOutPaddockMessage::deserialize(input);
    unsigned int _paddockedMountsDescriptionLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _paddockedMountsDescriptionLen; _i1++) {
        _item1.deserialize(input);
        this->paddockedMountsDescription.push_back(_item1);
    }
}

void ExchangeStartOkMountMessage::_paddockedMountsDescriptionFunc(ICustomDataInput &input) {
    MountClientData _item;
    _item.deserialize(input);
    this->paddockedMountsDescription.push_back(_item);
}

