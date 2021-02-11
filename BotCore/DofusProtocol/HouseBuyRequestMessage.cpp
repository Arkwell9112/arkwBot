#include "HouseBuyRequestMessage.h"

void HouseBuyRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseBuyRequestMessage(input);
}

void HouseBuyRequestMessage::deserializeAs_HouseBuyRequestMessage(ICustomDataInput &input) {
    this->_proposedPriceFunc(input);
}

void HouseBuyRequestMessage::_proposedPriceFunc(ICustomDataInput &input) {
    this->proposedPrice = input.readVarUhLong();

}

