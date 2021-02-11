#include "ExchangeShopStockMovementUpdatedMessage.h"

void ExchangeShopStockMovementUpdatedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeShopStockMovementUpdatedMessage(input);
}

void ExchangeShopStockMovementUpdatedMessage::deserializeAs_ExchangeShopStockMovementUpdatedMessage(
        ICustomDataInput &input) {
    this->objectInfo.deserialize(input);
}

