#include "ExchangeObjectsModifiedMessage.h"

void ExchangeObjectsModifiedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectsModifiedMessage(input);
}

void ExchangeObjectsModifiedMessage::deserializeAs_ExchangeObjectsModifiedMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    ExchangeObjectMessage::deserialize(input);
    unsigned int _objectLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectLen; _i1++) {
        _item1.deserialize(input);
        this->object.push_back(_item1);
    }
}

void ExchangeObjectsModifiedMessage::_objectFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->object.push_back(_item);
}

