#include "StatisticDataBoolean.h"

void StatisticDataBoolean::deserialize(ICustomDataInput &input) {
    this->deserializeAs_StatisticDataBoolean(input);
}

void StatisticDataBoolean::deserializeAs_StatisticDataBoolean(ICustomDataInput &input) {
    StatisticData::deserialize(input);
    this->_valueFunc(input);
}

void StatisticDataBoolean::_valueFunc(ICustomDataInput &input) {
    this->value = input.readBoolean();
}

