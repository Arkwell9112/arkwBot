#include "GoldItem.h"

void GoldItem::deserialize(ICustomDataInput &input) {
    this->deserializeAs_GoldItem(input);
}

void GoldItem::deserializeAs_GoldItem(ICustomDataInput &input) {
    Item::deserialize(input);
    this->_sumFunc(input);
}

void GoldItem::_sumFunc(ICustomDataInput &input) {
    this->sum = input.readVarUhLong();

}

