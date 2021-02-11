#include "ExchangeSetCraftRecipeMessage.h"

void ExchangeSetCraftRecipeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeSetCraftRecipeMessage(input);
}

void ExchangeSetCraftRecipeMessage::deserializeAs_ExchangeSetCraftRecipeMessage(ICustomDataInput &input) {
    this->_objectGIDFunc(input);
}

void ExchangeSetCraftRecipeMessage::_objectGIDFunc(ICustomDataInput &input) {
    this->objectGID = input.readVarUhShort();

}

