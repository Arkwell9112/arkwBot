#include "ExchangeBidPriceMessage.h"

void ExchangeBidPriceMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidPriceMessage(input);
}

void ExchangeBidPriceMessage::deserializeAs_ExchangeBidPriceMessage(ICustomDataInput &input) {
    this->_genericIdFunc(input);
    this->_averagePriceFunc(input);
}

void ExchangeBidPriceMessage::_genericIdFunc(ICustomDataInput &input) {
    this->genericId = input.readVarUhShort();

}

void ExchangeBidPriceMessage::_averagePriceFunc(ICustomDataInput &input) {
    this->averagePrice = input.readVarLong();

}

