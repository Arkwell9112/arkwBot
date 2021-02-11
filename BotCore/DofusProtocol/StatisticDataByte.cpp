#include "StatisticDataByte.h"

void StatisticDataByte::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatisticDataByte(input);
}

void StatisticDataByte::deserializeAs_StatisticDataByte(ICustomDataInput &input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataByte::_valueFunc(ICustomDataInput &input) {
    this->value = input.readByte();
}

