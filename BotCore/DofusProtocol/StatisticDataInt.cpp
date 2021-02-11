#include "StatisticDataInt.h"

void StatisticDataInt::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatisticDataInt(input);
}

void StatisticDataInt::deserializeAs_StatisticDataInt(ICustomDataInput &input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataInt::_valueFunc(ICustomDataInput &input) {
    this->value = input.readInt();
}

