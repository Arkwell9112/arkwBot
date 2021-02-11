#include "PrismsInfoValidMessage.h"

void PrismsInfoValidMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PrismsInfoValidMessage(input);
}

void PrismsInfoValidMessage::deserializeAs_PrismsInfoValidMessage(ICustomDataInput &input) {
    PrismFightersInformation _item1;
    unsigned int _fightsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _fightsLen; _i1++) {
        _item1.deserialize(input);
        this->fights.push_back(_item1);
    }
}

void PrismsInfoValidMessage::_fightsFunc(ICustomDataInput &input) {
    PrismFightersInformation _item;
    _item.deserialize(input);
    this->fights.push_back(_item);
}

