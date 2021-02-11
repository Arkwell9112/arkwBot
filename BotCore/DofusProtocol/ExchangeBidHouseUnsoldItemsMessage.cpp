#include "ExchangeBidHouseUnsoldItemsMessage.h"

void ExchangeBidHouseUnsoldItemsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseUnsoldItemsMessage(input);
}

void ExchangeBidHouseUnsoldItemsMessage::deserializeAs_ExchangeBidHouseUnsoldItemsMessage(ICustomDataInput &input) {
    ObjectItemGenericQuantity _item1;
    unsigned int _itemsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _itemsLen; _i1++) {
        _item1.deserialize(input);
        this->items.push_back(_item1);
    }
}

void ExchangeBidHouseUnsoldItemsMessage::_itemsFunc(ICustomDataInput &input) {
    ObjectItemGenericQuantity _item;
    _item.deserialize(input);
    this->items.push_back(_item);
}

