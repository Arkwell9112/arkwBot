#include "ExchangeWaitingResultMessage.h"

void ExchangeWaitingResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeWaitingResultMessage(input);
}

void ExchangeWaitingResultMessage::deserializeAs_ExchangeWaitingResultMessage(ICustomDataInput &input) {
    this->_bwaitFunc(input);
}

void ExchangeWaitingResultMessage::_bwaitFunc(ICustomDataInput &input) {
    this->bwait = input.readBoolean();
}

