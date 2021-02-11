#include "ExchangeKamaModifiedMessage.h"

void ExchangeKamaModifiedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeKamaModifiedMessage(input);
}

void ExchangeKamaModifiedMessage::deserializeAs_ExchangeKamaModifiedMessage(ICustomDataInput &input) {
    ExchangeObjectMessage::deserialize(input);
    this->_quantityFunc(input);
}

void ExchangeKamaModifiedMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhLong();

}

