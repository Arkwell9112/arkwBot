#include "ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage.h"

void ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage(input);
}

void
ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage::deserializeAs_ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage(
        ICustomDataInput &input) {
    this->_allowFunc(input);
}

void ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage::_allowFunc(ICustomDataInput &input) {
    this->allow = input.readBoolean();
}

