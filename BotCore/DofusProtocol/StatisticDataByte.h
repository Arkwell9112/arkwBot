#ifndef STATISTICDATABYTE
#define STATISTICDATABYTE

#include "../IO/ICustomDataInput.h"
#include "StatisticData.h"

class StatisticDataByte : public StatisticData {
public:
    int value = 0;
    unsigned int protocolId = 399;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatisticDataByte(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif