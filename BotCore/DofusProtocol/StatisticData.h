#ifndef STATISTICDATA
#define STATISTICDATA

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class StatisticData : public NetworkInterface {
public:
    unsigned int protocolId = 8706;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_StatisticData(ICustomDataInput &input);
};

#endif