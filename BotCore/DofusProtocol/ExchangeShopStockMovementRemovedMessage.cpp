#include "ExchangeShopStockMovementRemovedMessage.h"

void ExchangeShopStockMovementRemovedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeShopStockMovementRemovedMessage(input);
}

void ExchangeShopStockMovementRemovedMessage::deserializeAs_ExchangeShopStockMovementRemovedMessage(
        ICustomDataInput &input) {
    this->_objectIdFunc(input);
}

void ExchangeShopStockMovementRemovedMessage::_objectIdFunc(ICustomDataInput &input) {
    this->objectId = input.readVarUhInt();

}

