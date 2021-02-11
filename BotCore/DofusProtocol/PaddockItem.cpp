#include "PaddockItem.h"

void PaddockItem::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockItem(input);
}

void PaddockItem::deserializeAs_PaddockItem(ICustomDataInput &input) {
    ObjectItemInRolePlay::deserialize(input);
    this->durability.deserialize(input);
}

