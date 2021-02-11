#include "DecraftResultMessage.h"

void DecraftResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DecraftResultMessage(input);
}

void DecraftResultMessage::deserializeAs_DecraftResultMessage(ICustomDataInput &input) {
    DecraftedItemStackInfo _item1;
    unsigned int _resultsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _resultsLen; _i1++) {
        _item1.deserialize(input);
        this->results.push_back(_item1);
    }
}

void DecraftResultMessage::_resultsFunc(ICustomDataInput &input) {
    DecraftedItemStackInfo _item;
    _item.deserialize(input);
    this->results.push_back(_item);
}

