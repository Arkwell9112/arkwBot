#ifndef STATISTICDATASHORT
#define STATISTICDATASHORT

#include "../IO/ICustomDataInput.h"
#include "StatisticData.h"

class StatisticDataShort : public StatisticData {
public:
    int value = 0;
    unsigned int protocolId = 760;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatisticDataShort(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif