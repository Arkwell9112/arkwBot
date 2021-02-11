#include "ExchangeStartedWithPodsMessage.h"

void ExchangeStartedWithPodsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartedWithPodsMessage(input);
}

void ExchangeStartedWithPodsMessage::deserializeAs_ExchangeStartedWithPodsMessage(ICustomDataInput &input) {
    ExchangeStartedMessage::deserialize(input);
    this->_firstCharacterIdFunc(input);
    this->_firstCharacterCurrentWeightFunc(input);
    this->_firstCharacterMaxWeightFunc(input);
    this->_secondCharacterIdFunc(input);
    this->_secondCharacterCurrentWeightFunc(input);
    this->_secondCharacterMaxWeightFunc(input);
}

void ExchangeStartedWithPodsMessage::_firstCharacterIdFunc(ICustomDataInput &input) {
    this->firstCharacterId = input.readDouble();

}

void ExchangeStartedWithPodsMessage::_firstCharacterCurrentWeightFunc(ICustomDataInput &input) {
    this->firstCharacterCurrentWeight = input.readVarUhInt();

}

void ExchangeStartedWithPodsMessage::_firstCharacterMaxWeightFunc(ICustomDataInput &input) {
    this->firstCharacterMaxWeight = input.readVarUhInt();

}

void ExchangeStartedWithPodsMessage::_secondCharacterIdFunc(ICustomDataInput &input) {
    this->secondCharacterId = input.readDouble();

}

void ExchangeStartedWithPodsMessage::_secondCharacterCurrentWeightFunc(ICustomDataInput &input) {
    this->secondCharacterCurrentWeight = input.readVarUhInt();

}

void ExchangeStartedWithPodsMessage::_secondCharacterMaxWeightFunc(ICustomDataInput &input) {
    this->secondCharacterMaxWeight = input.readVarUhInt();

}

