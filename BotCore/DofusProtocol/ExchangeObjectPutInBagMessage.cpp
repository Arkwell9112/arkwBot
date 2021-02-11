#include "ExchangeObjectPutInBagMessage.h"

void ExchangeObjectPutInBagMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectPutInBagMessage(input);
}

void ExchangeObjectPutInBagMessage::deserializeAs_ExchangeObjectPutInBagMessage(ICustomDataInput &input) {
    ExchangeObjectMessage::deserialize(input);
    this->object.deserialize(input);
}

