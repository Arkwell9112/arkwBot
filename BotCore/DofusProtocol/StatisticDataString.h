#ifndef STATISTICDATASTRING
#define STATISTICDATASTRING

#include "../IO/ICustomDataInput.h"
#include <string>
#include "StatisticData.h"

class StatisticDataString : public StatisticData {
public:
    std::string value;
    unsigned int protocolId = 134;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatisticDataString(ICustomDataInput &input);

    void _valueFunc(ICustomDataInput &input);
};

#endif