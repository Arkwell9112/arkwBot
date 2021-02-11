#include "ExchangeMoneyMovementInformationMessage.h"

void ExchangeMoneyMovementInformationMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeMoneyMovementInformationMessage(input);
}

void ExchangeMoneyMovementInformationMessage::deserializeAs_ExchangeMoneyMovementInformationMessage(
        ICustomDataInput &input) {
    this->_limitFunc(input);
}

void ExchangeMoneyMovementInformationMessage::_limitFunc(ICustomDataInput &input) {
    this->limit = input.readVarUhLong();

}

