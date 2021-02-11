#include "StorageObjectsUpdateMessage.h"

void StorageObjectsUpdateMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StorageObjectsUpdateMessage(input);
}

void StorageObjectsUpdateMessage::deserializeAs_StorageObjectsUpdateMessage(ICustomDataInput &input) {
    ObjectItem _item1;
    unsigned int _objectListLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectListLen; _i1++) {
        _item1.deserialize(input);
        this->objectList.push_back(_item1);
    }
}

void StorageObjectsUpdateMessage::_objectListFunc(ICustomDataInput &input) {
    ObjectItem _item;
    _item.deserialize(input);
    this->objectList.push_back(_item);
}

