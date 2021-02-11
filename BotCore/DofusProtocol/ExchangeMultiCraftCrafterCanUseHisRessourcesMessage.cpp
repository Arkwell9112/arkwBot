#include "ExchangeMultiCraftCrafterCanUseHisRessourcesMessage.h"

void ExchangeMultiCraftCrafterCanUseHisRessourcesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMultiCraftCrafterCanUseHisRessourcesMessage(input);
}

void
ExchangeMultiCraftCrafterCanUseHisRessourcesMessage::deserializeAs_ExchangeMultiCraftCrafterCanUseHisRessourcesMessage(
        ICustomDataInput &input) {
    this->_allowedFunc(input);
}

void ExchangeMultiCraftCrafterCanUseHisRessourcesMessage::_allowedFunc(ICustomDataInput &input) {
    this->allowed = input.readBoolean();
}

