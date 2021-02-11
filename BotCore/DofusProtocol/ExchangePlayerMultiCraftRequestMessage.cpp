#include "ExchangePlayerMultiCraftRequestMessage.h"

void ExchangePlayerMultiCraftRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangePlayerMultiCraftRequestMessage(input);
}

void
ExchangePlayerMultiCraftRequestMessage::deserializeAs_ExchangePlayerMultiCraftRequestMessage(ICustomDataInput &input) {
    ExchangeRequestMessage::deserialize(input);
    this->_targetFunc(input);
    this->_skillIdFunc(input);
}

void ExchangePlayerMultiCraftRequestMessage::_targetFunc(ICustomDataInput &input) {
    this->target = input.readVarUhLong();

}

void ExchangePlayerMultiCraftRequestMessage::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhInt();

}

