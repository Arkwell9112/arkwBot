#include "ObjectAveragePricesMessage.h"

void ObjectAveragePricesMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ObjectAveragePricesMessage(input);
}

void ObjectAveragePricesMessage::deserializeAs_ObjectAveragePricesMessage(ICustomDataInput &input) {
    unsigned int _val1 = 0;
    double _val2 = 0;
    unsigned int _idsLen = input.readUnsignedShort();
    for (unsigned int _i1 = 0; _i1 < _idsLen; _i1++) {
        _val1 = input.readVarUhShort();

        this->ids.push_back(_val1);
    }
    unsigned int _avgPricesLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _avgPricesLen; _i2++) {
        _val2 = input.readVarUhLong();

        this->avgPrices.push_back(_val2);
    }
}

void ObjectAveragePricesMessage::_idsFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhShort();

    this->ids.push_back(_val);
}

void ObjectAveragePricesMessage::_avgPricesFunc(ICustomDataInput &input) {
    double _val = input.readVarUhLong();

    this->avgPrices.push_back(_val);
}

