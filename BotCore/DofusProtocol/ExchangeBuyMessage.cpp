#include "ExchangeBuyMessage.h"

void ExchangeBuyMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBuyMessage(input);
}

void ExchangeBuyMessage::deserializeAs_ExchangeBuyMessage(ICustomDataInput &input) {
    this->_objectToBuyIdFunc(input);
    this->_quantityFunc(input);
}

void ExchangeBuyMessage::_objectToBuyIdFunc(ICustomDataInput &input) {
    this->objectToBuyId = input.readVarUhInt();

}

void ExchangeBuyMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhInt();

}

