#include "PaddockBuyResultMessage.h"

void PaddockBuyResultMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockBuyResultMessage(input);
}

void PaddockBuyResultMessage::deserializeAs_PaddockBuyResultMessage(ICustomDataInput &input) {
    this->_paddockIdFunc(input);
    this->_boughtFunc(input);
    this->_realPriceFunc(input);
}

void PaddockBuyResultMessage::_paddockIdFunc(ICustomDataInput &input) {
    this->paddockId = input.readDouble();

}

void PaddockBuyResultMessage::_boughtFunc(ICustomDataInput &input) {
    this->bought = input.readBoolean();
}

void PaddockBuyResultMessage::_realPriceFunc(ICustomDataInput &input) {
    this->realPrice = input.readVarUhLong();

}

