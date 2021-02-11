#include "ExchangeOkMultiCraftMessage.h"

void ExchangeOkMultiCraftMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeOkMultiCraftMessage(input);
}

void ExchangeOkMultiCraftMessage::deserializeAs_ExchangeOkMultiCraftMessage(ICustomDataInput &input) {
    this->_initiatorIdFunc(input);
    this->_otherIdFunc(input);
    this->_roleFunc(input);
}

void ExchangeOkMultiCraftMessage::_initiatorIdFunc(ICustomDataInput &input) {
    this->initiatorId = input.readVarUhLong();

}

void ExchangeOkMultiCraftMessage::_otherIdFunc(ICustomDataInput &input) {
    this->otherId = input.readVarUhLong();

}

void ExchangeOkMultiCraftMessage::_roleFunc(ICustomDataInput &input) {
    this->role = input.readByte();
}

