#include "ExchangeCraftPaymentModifiedMessage.h"

void ExchangeCraftPaymentModifiedMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeCraftPaymentModifiedMessage(input);
}

void ExchangeCraftPaymentModifiedMessage::deserializeAs_ExchangeCraftPaymentModifiedMessage(ICustomDataInput &input) {
    this->_goldSumFunc(input);
}

void ExchangeCraftPaymentModifiedMessage::_goldSumFunc(ICustomDataInput &input) {
    this->goldSum = input.readVarUhLong();

}

