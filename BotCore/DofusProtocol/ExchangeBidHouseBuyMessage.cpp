#include "ExchangeBidHouseBuyMessage.h"

void ExchangeBidHouseBuyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHouseBuyMessage(input);
}

void ExchangeBidHouseBuyMessage::deserializeAs_ExchangeBidHouseBuyMessage(ICustomDataInput &input) {
    this->_uidFunc(input);
    this->_qtyFunc(input);
    this->_priceFunc(input);
}

void ExchangeBidHouseBuyMessage::_uidFunc(ICustomDataInput &input) {
    this->uid = input.readVarUhInt();

}

void ExchangeBidHouseBuyMessage::_qtyFunc(ICustomDataInput &input) {
    this->qty = input.readVarUhInt();

}

void ExchangeBidHouseBuyMessage::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

