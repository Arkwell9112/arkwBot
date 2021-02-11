#include "ItemsPreset.h"

void ItemsPreset::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ItemsPreset(input);
}

void ItemsPreset::deserializeAs_ItemsPreset(ICustomDataInput &input) {
    ItemForPreset _item1;
    Preset::deserialize(input);
    unsigned int _itemsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _itemsLen; _i1++) {
        _item1.deserialize(input);
        this->items.push_back(_item1);
    }
    this->_mountEquippedFunc(input);
    this->look.deserialize(input);
}

void ItemsPreset::_itemsFunc(ICustomDataInput &input) {
    ItemForPreset _item;
    _item.deserialize(input);
    this->items.push_back(_item);
}

void ItemsPreset::_mountEquippedFunc(ICustomDataInput &input) {
    this->mountEquipped = input.readBoolean();
}

