#include "ExchangeBidHousePriceMessage.h"

void ExchangeBidHousePriceMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidHousePriceMessage(input);
}

void ExchangeBidHousePriceMessage::deserializeAs_ExchangeBidHousePriceMessage(ICustomDataInput &input) {
    this->_genIdFunc(input);
}

void ExchangeBidHousePriceMessage::_genIdFunc(ICustomDataInput &input) {
    this->genId = input.readVarUhShort();

}

