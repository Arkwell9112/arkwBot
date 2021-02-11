#include "ExchangeObjectMovePricedMessage.h"

void ExchangeObjectMovePricedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectMovePricedMessage(input);
}

void ExchangeObjectMovePricedMessage::deserializeAs_ExchangeObjectMovePricedMessage(ICustomDataInput &input) {
    ExchangeObjectMoveMessage::deserialize(input);
    this->_priceFunc(input);
}

void ExchangeObjectMovePricedMessage::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

