#include "StatisticDataShort.h"

void StatisticDataShort::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatisticDataShort(input);
}

void StatisticDataShort::deserializeAs_StatisticDataShort(ICustomDataInput &input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataShort::_valueFunc(ICustomDataInput &input) {
    this->value = input.readShort();
}

