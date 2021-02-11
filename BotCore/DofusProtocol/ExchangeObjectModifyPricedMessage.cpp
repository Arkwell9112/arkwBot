#include "ExchangeObjectModifyPricedMessage.h"

void ExchangeObjectModifyPricedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectModifyPricedMessage(input);
}

void ExchangeObjectModifyPricedMessage::deserializeAs_ExchangeObjectModifyPricedMessage(ICustomDataInput &input) {
    ExchangeObjectMovePricedMessage::deserialize(input);
}

