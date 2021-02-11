#include "StatedMapUpdateMessage.h"

void StatedMapUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatedMapUpdateMessage(input);
}

void StatedMapUpdateMessage::deserializeAs_StatedMapUpdateMessage(ICustomDataInput &input) {
    StatedElement _item1;
    unsigned int _statedElementsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _statedElementsLen; _i1++) {
        _item1.deserialize(input);
        this->statedElements.push_back(_item1);
    }
}

void StatedMapUpdateMessage::_statedElementsFunc(ICustomDataInput &input) {
    StatedElement _item;
    _item.deserialize(input);
    this->statedElements.push_back(_item);
}

