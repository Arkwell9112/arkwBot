#include "ExchangeObjectModifiedInBagMessage.h"

void ExchangeObjectModifiedInBagMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectModifiedInBagMessage(input);
}

void ExchangeObjectModifiedInBagMessage::deserializeAs_ExchangeObjectModifiedInBagMessage(ICustomDataInput &input) {
    ExchangeObjectMessage::deserialize(input);
    this->object.deserialize(input);
}

