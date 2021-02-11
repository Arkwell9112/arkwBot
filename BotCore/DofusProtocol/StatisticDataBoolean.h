#ifndef STATISTICDATABOOLEAN
#define STATISTICDATABOOLEAN

#include "../IO/ICustomDataInput.h"
#include "StatisticData.h"

class StatisticDataBoolean : public StatisticData {
public:
    bool value = false;
    unsigned int protocolId = 9517;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatisticDataBoolean(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif