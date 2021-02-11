#include "ExchangeWeightMessage.h"

void ExchangeWeightMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeWeightMessage(input);
}

void ExchangeWeightMessage::deserializeAs_ExchangeWeightMessage(ICustomDataInput &input) {
    this->_currentWeightFunc(input);
    this->_maxWeightFunc(input);
}

void ExchangeWeightMessage::_currentWeightFunc(ICustomDataInput &input) {
    this->currentWeight = input.readVarUhInt();

}

void ExchangeWeightMessage::_maxWeightFunc(ICustomDataInput &input) {
    this->maxWeight = input.readVarUhInt();

}

