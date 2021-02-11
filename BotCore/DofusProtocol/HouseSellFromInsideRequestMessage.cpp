#include "HouseSellFromInsideRequestMessage.h"

void HouseSellFromInsideRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_HouseSellFromInsideRequestMessage(input);
}

void HouseSellFromInsideRequestMessage::deserializeAs_HouseSellFromInsideRequestMessage(ICustomDataInput &input) {
    HouseSellRequestMessage::deserialize(input);
}

