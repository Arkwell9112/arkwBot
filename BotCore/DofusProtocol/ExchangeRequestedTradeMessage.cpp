#include "ExchangeRequestedTradeMessage.h"

void ExchangeRequestedTradeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeRequestedTradeMessage(input);
}

void ExchangeRequestedTradeMessage::deserializeAs_ExchangeRequestedTradeMessage(ICustomDataInput &input) {
    ExchangeRequestedMessage::deserialize(input);
    this->_sourceFunc(input);
    this->_targetFunc(input);
}

void ExchangeRequestedTradeMessage::_sourceFunc(ICustomDataInput &input) {
    this->source = input.readVarUhLong();

}

void ExchangeRequestedTradeMessage::_targetFunc(ICustomDataInput &input) {
    this->target = input.readVarUhLong();

}

