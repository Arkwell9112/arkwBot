#include "ExchangePodsModifiedMessage.h"

void ExchangePodsModifiedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangePodsModifiedMessage(input);
}

void ExchangePodsModifiedMessage::deserializeAs_ExchangePodsModifiedMessage(ICustomDataInput &input) {
    ExchangeObjectMessage::deserialize(input);
    this->_currentWeightFunc(input);
    this->_maxWeightFunc(input);
}

void ExchangePodsModifiedMessage::_currentWeightFunc(ICustomDataInput &input) {
    this->currentWeight = input.readVarUhInt();

}

void ExchangePodsModifiedMessage::_maxWeightFunc(ICustomDataInput &input) {
    this->maxWeight = input.readVarUhInt();

}

