#include "ExchangeCraftPaymentModificationRequestMessage.h"

void ExchangeCraftPaymentModificationRequestMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCraftPaymentModificationRequestMessage(input);
}

void ExchangeCraftPaymentModificationRequestMessage::deserializeAs_ExchangeCraftPaymentModificationRequestMessage(
        ICustomDataInput &input) {
    this->_quantityFunc(input);
}

void ExchangeCraftPaymentModificationRequestMessage::_quantityFunc(ICustomDataInput &input) {
    this->quantity = input.readVarUhLong();

}

