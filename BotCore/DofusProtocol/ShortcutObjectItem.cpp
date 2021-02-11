#include "ShortcutObjectItem.h"

void ShortcutObjectItem::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ShortcutObjectItem(input);
}

void ShortcutObjectItem::deserializeAs_ShortcutObjectItem(ICustomDataInput &input) {
    ShortcutObject::deserialize(input);
    this->_itemUIDFunc(input);
    this->_itemGIDFunc(input);
}

void ShortcutObjectItem::_itemUIDFunc(ICustomDataInput &input) {
    this->itemUID = input.readInt();
}

void ShortcutObjectItem::_itemGIDFunc(ICustomDataInput &input) {
    this->itemGID = input.readInt();
}

