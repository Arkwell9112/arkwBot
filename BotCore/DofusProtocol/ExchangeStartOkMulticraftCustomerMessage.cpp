#include "ExchangeStartOkMulticraftCustomerMessage.h"

void ExchangeStartOkMulticraftCustomerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkMulticraftCustomerMessage(input);
}

void ExchangeStartOkMulticraftCustomerMessage::deserializeAs_ExchangeStartOkMulticraftCustomerMessage(
        ICustomDataInput &input) {
    this->_skillIdFunc(input);
    this->_crafterJobLevelFunc(input);
}

void ExchangeStartOkMulticraftCustomerMessage::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhInt();

}

void ExchangeStartOkMulticraftCustomerMessage::_crafterJobLevelFunc(ICustomDataInput &input) {
    this->crafterJobLevel = input.readUnsignedByte();

}

