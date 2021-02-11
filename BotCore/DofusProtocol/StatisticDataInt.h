#ifndef STATISTICDATAINT
#define STATISTICDATAINT

#include "../IO/ICustomDataInput.h"
#include "StatisticData.h"

class StatisticDataInt : public StatisticData {
public:
    int value = 0;
    unsigned int protocolId = 8962;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatisticDataInt(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif