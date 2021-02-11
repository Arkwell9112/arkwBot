#include "ExchangeTypesItemsExchangerDescriptionForUserMessage.h"

void ExchangeTypesItemsExchangerDescriptionForUserMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeTypesItemsExchangerDescriptionForUserMessage(input);
}

void
ExchangeTypesItemsExchangerDescriptionForUserMessage::deserializeAs_ExchangeTypesItemsExchangerDescriptionForUserMessage(
        ICustomDataInput &input) {
    BidExchangerObjectInfo _item2;
    this->_objectTypeFunc(input);
    unsigned int _itemTypeDescriptionsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _itemTypeDescriptionsLen; _i2++) {
        _item2.deserialize(input);
        this->itemTypeDescriptions.push_back(_item2);
    }
}

void ExchangeTypesItemsExchangerDescriptionForUserMessage::_objectTypeFunc(ICustomDataInput &input) {
    this->objectType = input.readInt();

}

void ExchangeTypesItemsExchangerDescriptionForUserMessage::_itemTypeDescriptionsFunc(ICustomDataInput &input) {
    BidExchangerObjectInfo _item;
    _item.deserialize(input);
    this->itemTypeDescriptions.push_back(_item);
}

