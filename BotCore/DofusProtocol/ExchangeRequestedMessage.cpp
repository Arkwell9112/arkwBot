#include "ExchangeRequestedMessage.h"

void ExchangeRequestedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeRequestedMessage(input);
}

void ExchangeRequestedMessage::deserializeAs_ExchangeRequestedMessage(ICustomDataInput &input) {
    this->_exchangeTypeFunc(input);
}

void ExchangeRequestedMessage::_exchangeTypeFunc(ICustomDataInput &input) {
    this->exchangeType = input.readByte();
}

