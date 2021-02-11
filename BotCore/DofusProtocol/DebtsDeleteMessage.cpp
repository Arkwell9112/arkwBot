#include "DebtsDeleteMessage.h"

void DebtsDeleteMessage::deserialize(ICustomDataInput &input) {
    this->deserializeAs_DebtsDeleteMessage(input);
}

void DebtsDeleteMessage::deserializeAs_DebtsDeleteMessage(ICustomDataInput &input) {
    double _val2 = 0;
    this->_reasonFunc(input);
    unsigned int _debtsLen = input.readUnsignedShort();
    for (unsigned int _i2 = 0; _i2 < _debtsLen; _i2++) {
        _val2 = input.readDouble();

        this->debts.push_back(_val2);
    }
}

void DebtsDeleteMessage::_reasonFunc(ICustomDataInput &input) {
    this->reason = input.readByte();

}

void DebtsDeleteMessage::_debtsFunc(ICustomDataInput &input) {
    double _val = input.readDouble();

    this->debts.push_back(_val);
}

