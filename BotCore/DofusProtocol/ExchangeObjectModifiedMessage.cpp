#include "ExchangeObjectModifiedMessage.h"

void ExchangeObjectModifiedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectModifiedMessage(input);
}

void ExchangeObjectModifiedMessage::deserializeAs_ExchangeObjectModifiedMessage(ICustomDataInput &input) {
    ExchangeObjectMessage::deserialize(input);
    this->object.deserialize(input);
}

