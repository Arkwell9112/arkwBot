#include "ExchangeStartedMessage.h"

void ExchangeStartedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartedMessage(input);
}

void ExchangeStartedMessage::deserializeAs_ExchangeStartedMessage(ICustomDataInput &input) {
    this->_exchangeTypeFunc(input);
}

void ExchangeStartedMessage::_exchangeTypeFunc(ICustomDataInput &input) {
    this->exchangeType = input.readByte();
}

