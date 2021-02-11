#include "ExchangeBidPriceForSellerMessage.h"

void ExchangeBidPriceForSellerMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeBidPriceForSellerMessage(input);
}

void ExchangeBidPriceForSellerMessage::deserializeAs_ExchangeBidPriceForSellerMessage(ICustomDataInput &input) {
    double _val2 = 0;
    ExchangeBidPriceMessage::deserialize(input);
    this->_allIdenticalFunc(input);
    unsigned int _minimalPricesLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _minimalPricesLen; _i2++) {
        _val2 = input.readVarUhLong();

        this->minimalPrices.push_back(_val2);
    }
}

void ExchangeBidPriceForSellerMessage::_allIdenticalFunc(ICustomDataInput &input) {
    this->allIdentical = input.readBoolean();
}

void ExchangeBidPriceForSellerMessage::_minimalPricesFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->minimalPrices.push_back(_val);
}

