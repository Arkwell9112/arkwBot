#include "ExchangeSellMessage.h"

void ExchangeSellMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeSellMessage(input);
}

void ExchangeSellMessage::deserializeAs_ExchangeSellMessage(ICustomDataInput &input) {
    this->_objectToSellIdFunc(input);
    this->_quantityFunc(input);
}

void ExchangeSellMessage::_objectToSellIdFunc(ICustomDataInput &input) {
    this->objectToSellId = input.readVarUhInt();

}

void ExchangeSellMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

