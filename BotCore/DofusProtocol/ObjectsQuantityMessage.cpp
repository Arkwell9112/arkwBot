#include "ObjectsQuantityMessage.h"

void ObjectsQuantityMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectsQuantityMessage(input);
}

void ObjectsQuantityMessage::deserializeAs_ObjectsQuantityMessage(ICustomDataInput &input) {
    ObjectItemQuantity _item1;
    unsigned int _objectsUIDAndQtyLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _objectsUIDAndQtyLen; _i1++) {
        _item1.deserialize(input);
        this->objectsUIDAndQty.push_back(_item1);
    }
}

void ObjectsQuantityMessage::_objectsUIDAndQtyFunc(ICustomDataInput &input) {
    ObjectItemQuantity _item;
    _item.deserialize(input);
    this->objectsUIDAndQty.push_back(_item);
}

