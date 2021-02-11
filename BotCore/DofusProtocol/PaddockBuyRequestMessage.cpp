#include "PaddockBuyRequestMessage.h"

void PaddockBuyRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_PaddockBuyRequestMessage(input);
}

void PaddockBuyRequestMessage::deserializeAs_PaddockBuyRequestMessage(ICustomDataInput &input) {
    this->_proposedPriceFunc(input);
}

void PaddockBuyRequestMessage::_proposedPriceFunc(ICustomDataInput &input) {
    this->proposedPrice = input.readVarUhLong();

}

