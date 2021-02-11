#include "ExchangeHandleMountsMessage.h"

void ExchangeHandleMountsMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_ExchangeHandleMountsMessage(input);
}

void ExchangeHandleMountsMessage::deserializeAs_ExchangeHandleMountsMessage(ICustomDataInput &input) {
    unsigned int _val2 = 0;
    this->_actionTypeFunc(input);
    unsigned int _ridesIdLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _ridesIdLen; _i2++) {
        _val2 = input.readVarUhInt();

        this->ridesId.push_back(_val2);
    }
}

void ExchangeHandleMountsMessage::_actionTypeFunc(ICustomDataInput &input) {
    this->actionType = input.readByte();
}

void ExchangeHandleMountsMessage::_ridesIdFunc(ICustomDataInput &input) {
    unsigned int _val = input.readVarUhInt();

    this->ridesId.push_back(_val);
}

