#ifndef ANOMALYSUBAREAINFORMATION
#define ANOMALYSUBAREAINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class AnomalySubareaInformation : public NetworkInterface {
public:
    unsigned int subAreaId = 0;
    int rewardRate = 0;
    bool hasAnomaly = false;
    double anomalyClosingTime = 0;
    unsigned int protocolId = 5680;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AnomalySubareaInformation(ICustomDataInput &input);

    void _subAreaIdFunc(ICustomDataInput &input);

    void _rewardRateFunc(ICustomDataInput &input);

    void _hasAnomalyFunc(ICustomDataInput &input);

    void _anomalyClosingTimeFunc(ICustomDataInput &input);
};

#endif