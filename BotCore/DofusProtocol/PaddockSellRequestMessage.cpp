#include "PaddockSellRequestMessage.h"

void PaddockSellRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockSellRequestMessage(input);
}

void PaddockSellRequestMessage::deserializeAs_PaddockSellRequestMessage(ICustomDataInput &input) {
    this->_priceFunc(input);
    this->_forSaleFunc(input);
}

void PaddockSellRequestMessage::_priceFunc(ICustomDataInput &input) {
    this->price = input.readVarUhLong();

}

void PaddockSellRequestMessage::_forSaleFunc(ICustomDataInput &input) {
    this->forSale = input.readBoolean();
}

