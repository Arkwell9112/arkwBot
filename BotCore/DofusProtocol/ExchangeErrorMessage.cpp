#include "ExchangeErrorMessage.h"

void ExchangeErrorMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeErrorMessage(input);
}

void ExchangeErrorMessage::deserializeAs_ExchangeErrorMessage(ICustomDataInput &input) {
    this->_errorTypeFunc(input);
}

void ExchangeErrorMessage::_errorTypeFunc(ICustomDataInput &input) {
    this->errorType = input.readByte();
}

