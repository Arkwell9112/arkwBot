#include "ExchangeRequestMessage.h"

void ExchangeRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeRequestMessage(input);
}

void ExchangeRequestMessage::deserializeAs_ExchangeRequestMessage(ICustomDataInput &input) {
    this->_exchangeTypeFunc(input);
}

void ExchangeRequestMessage::_exchangeTypeFunc(ICustomDataInput &input) {
    this->exchangeType = input.readByte();
}

