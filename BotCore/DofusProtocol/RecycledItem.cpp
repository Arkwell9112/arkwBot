#include "RecycledItem.h"

void RecycledItem::deserialize(ICustomDataInput &input) {
    this->deserializeAs_RecycledItem(input);
}

void RecycledItem::deserializeAs_RecycledItem(ICustomDataInput &input) {
    this->_idFunc(input);
    this->_qtyFunc(input);
}

void RecycledItem::_idFunc(ICustomDataInput &input) {
    this->id = input.readVarUhShort();

}

void RecycledItem::_qtyFunc(ICustomDataInput &input) {
    this->qty = input.readUnsignedInt();

}

