#include "ItemDurability.h"

void ItemDurability::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ItemDurability(input);
}

void ItemDurability::deserializeAs_ItemDurability(ICustomDataInput &input) {
    this->_durabilityFunc(input);
    this->_durabilityMaxFunc(input);
}

void ItemDurability::_durabilityFunc(ICustomDataInput &input) {
    this->durability = input.readShort();
}

void ItemDurability::_durabilityMaxFunc(ICustomDataInput &input) {
    this->durabilityMax = input.readShort();
}

