#include "ExchangeItemAutoCraftStopedMessage.h"

void ExchangeItemAutoCraftStopedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeItemAutoCraftStopedMessage(input);
}

void ExchangeItemAutoCraftStopedMessage::deserializeAs_ExchangeItemAutoCraftStopedMessage(ICustomDataInput &input) {
    this->_reasonFunc(input);
}

void ExchangeItemAutoCraftStopedMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();
}

