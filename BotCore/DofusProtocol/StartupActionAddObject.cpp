#include "StartupActionAddObject.h"

void StartupActionAddObject::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StartupActionAddObject(input);
}

void StartupActionAddObject::deserializeAs_StartupActionAddObject(ICustomDataInput &input) {
    ObjectItemInformationWithQuantity _item6;
    this->_uidFunc(input);
    this->_titleFunc(input);
    this->_textFunc(input);
    this->_descUrlFunc(input);
    this->_pictureUrlFunc(input);
    unsigned int _itemsLen = input.readUnsignedShort();
    for (unsigned int _i6 = 0; _i6 < _itemsLen; _i6++) {
        _item6.deserialize(input);
        this->items.push_back(_item6);
    }
}

void StartupActionAddObject::_uidFunc(ICustomDataInput &input) {
    this->uid = input.readInt();

}

void StartupActionAddObject::_titleFunc(ICustomDataInput &input) {
    this->title = input.readUTF();
}

void StartupActionAddObject::_textFunc(ICustomDataInput &input) {
    this->text = input.readUTF();
}

void StartupActionAddObject::_descUrlFunc(ICustomDataInput &input) {
    this->descUrl = input.readUTF();
}

void StartupActionAddObject::_pictureUrlFunc(ICustomDataInput &input) {
    this->pictureUrl = input.readUTF();
}

void StartupActionAddObject::_itemsFunc(ICustomDataInput &input) {
    ObjectItemInformationWithQuantity _item;
    _item.deserialize(input);
    this->items.push_back(_item);
}

