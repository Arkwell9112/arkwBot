#include "../ProtocolTypeManager.h"
#include "ObjectItem.h"

void ObjectItem::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectItem(input);
}

void ObjectItem::deserializeAs_ObjectItem(ICustomDataInput &input) {
    unsigned int _id3 = 0;
    ObjectEffect _item3;
    Item::deserialize(input);
    this->_positionFunc(input);
    this->_objectGIDFunc(input);
    unsigned int _effectsLen = input.readUnsignedShort();
    for (unsigned int _i3 = 0; _i3 < _effectsLen; _i3++) {
        _id3 = input.readUnsignedShort();
        _item3 = ProtocolTypeManager::getObject<ObjectEffect>(input, _id3);
        this->effects.push_back(_item3);
    }
    this->_objectUIDFunc(input);
    this->_quantityFunc(input);
}

void ObjectItem::_positionFunc(ICustomDataInput &input) {
    this->position = input.readShort();

}

void ObjectItem::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

void ObjectItem::_effectsFunc(ICustomDataInput &input) {
    unsigned int _id = input.readUnsignedShort();
    ObjectEffect _item = ProtocolTypeManager::getObject<ObjectEffect>(input, _id);
    _item.deserialize(input);
    this->effects.push_back(_item);
}

void ObjectItem::_objectUIDFunc(ICustomDataInput &input) {
    this->objectUID = input.readVarUhInt();

}

void ObjectItem::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

