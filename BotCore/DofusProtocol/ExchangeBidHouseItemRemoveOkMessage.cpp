#include "ExchangeBidHouseItemRemoveOkMessage.h"

void ExchangeBidHouseItemRemoveOkMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseItemRemoveOkMessage(input);
}

void ExchangeBidHouseItemRemoveOkMessage::deserializeAs_ExchangeBidHouseItemRemoveOkMessage(ICustomDataInput &input) {
    this->_sellerIdFunc(input);
}

void ExchangeBidHouseItemRemoveOkMessage::_sellerIdFunc(ICustomDataInput &input) {
    this->sellerId = input.readInt();
}

