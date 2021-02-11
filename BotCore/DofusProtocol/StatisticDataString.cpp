#include "StatisticDataString.h"

void StatisticDataString::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatisticDataString(input);
}

void StatisticDataString::deserializeAs_StatisticDataString(ICustomDataInput &input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataString::_valueFunc(ICustomDataInput &input) {
    this->value = input.readUTF();
}

