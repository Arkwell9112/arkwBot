#include "ExchangeObjectAddedMessage.h"

void ExchangeObjectAddedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectAddedMessage(input);
}

void ExchangeObjectAddedMessage::deserializeAs_ExchangeObjectAddedMessage(ICustomDataInput &input) {
    ExchangeObjectMessage::deserialize(input);
    this->object.deserialize(input);
}

