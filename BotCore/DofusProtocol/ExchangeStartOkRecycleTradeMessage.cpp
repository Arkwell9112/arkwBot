#include "ExchangeStartOkRecycleTradeMessage.h"

void ExchangeStartOkRecycleTradeMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartOkRecycleTradeMessage(input);
}

void ExchangeStartOkRecycleTradeMessage::deserializeAs_ExchangeStartOkRecycleTradeMessage(ICustomDataInput &input) {
    this->_percentToPrismFunc(input);
    this->_percentToPlayerFunc(input);
}

void ExchangeStartOkRecycleTradeMessage::_percentToPrismFunc(ICustomDataInput &input) {
    this->percentToPrism = input.readShort();

}

void ExchangeStartOkRecycleTradeMessage::_percentToPlayerFunc(ICustomDataInput &input) {
    this->percentToPlayer = input.readShort();

}

