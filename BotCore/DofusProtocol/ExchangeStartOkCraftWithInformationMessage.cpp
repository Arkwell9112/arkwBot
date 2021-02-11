#include "ExchangeStartOkCraftWithInformationMessage.h"

void ExchangeStartOkCraftWithInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkCraftWithInformationMessage(input);
}

void ExchangeStartOkCraftWithInformationMessage::deserializeAs_ExchangeStartOkCraftWithInformationMessage(
        ICustomDataInput &input) {
    ExchangeStartOkCraftMessage::deserialize(input);
    this->_skillIdFunc(input);
}

void ExchangeStartOkCraftWithInformationMessage::_skillIdFunc(ICustomDataInput &input) {
    this->skillId = input.readVarUhInt();

}

