#include "ExchangeStartOkMulticraftCrafterMessage.h"

void ExchangeStartOkMulticraftCrafterMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkMulticraftCrafterMessage(input);
}

void ExchangeStartOkMulticraftCrafterMessage::deserializeAs_ExchangeStartOkMulticraftCrafterMessage(
        ICustomDataInput &input) {
    this->_skillIdFunc(input);
}

void ExchangeStartOkMulticraftCrafterMessage::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhInt();

}

