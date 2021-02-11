#include "ExchangeObjectMoveKamaMessage.h"

void ExchangeObjectMoveKamaMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeObjectMoveKamaMessage(input);
}

void ExchangeObjectMoveKamaMessage::deserializeAs_ExchangeObjectMoveKamaMessage(ICustomDataInput &input) {
    this->_quantityFunc(input);
}

void ExchangeObjectMoveKamaMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarLong();

}

