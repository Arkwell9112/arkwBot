#include "ObjectsAddedMessage.h"

void ObjectsAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectsAddedMessage(input);
}

void ObjectsAddedMessage::deserializeAs_ObjectsAddedMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    unsigned int _objectLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectLen; _i1++) {
        _item1.deserialize(input);
        this->object.push_back(_item1);
    }
}

void ObjectsAddedMessage::_objectFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->object.push_back(_item);
}

