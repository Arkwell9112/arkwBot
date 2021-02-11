#include "AccountHouseMessage.h"

void AccountHouseMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_AccountHouseMessage(input);
}

void AccountHouseMessage::deserializeAs_AccountHouseMessage(ICustomDataInput &input) {
    AccountHouseInformations _item1;
    unsigned int _housesLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _housesLen; _i1++) {
        _item1.deserialize(input);
        this->houses.push_back(_item1);
    }
}

void AccountHouseMessage::_housesFunc(ICustomDataInput &input) {
    AccountHouseInformations _item;
    _item.deserialize(input);
    this->houses.push_back(_item);
}

