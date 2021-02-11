#include "ExchangeObjectsAddedMessage.h"

void ExchangeObjectsAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectsAddedMessage(input);
}

void ExchangeObjectsAddedMessage::deserializeAs_ExchangeObjectsAddedMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    ExchangeObjectMessage::deserialize(input);
    unsigned int _objectLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectLen; _i1++) {
        _item1.deserialize(input);
        this->object.push_back(_item1);
    }
}

void ExchangeObjectsAddedMessage::_objectFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->object.push_back(_item);
}

