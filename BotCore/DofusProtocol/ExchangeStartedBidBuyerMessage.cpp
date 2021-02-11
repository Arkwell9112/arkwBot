#include "ExchangeStartedBidBuyerMessage.h"

void ExchangeStartedBidBuyerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeStartedBidBuyerMessage(input);
}

void ExchangeStartedBidBuyerMessage::deserializeAs_ExchangeStartedBidBuyerMessage(ICustomDataInput &input) {
    this->buyerDescriptor.deserialize(input);
}

