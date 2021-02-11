#ifndef PRISMINFORMATION
#define PRISMINFORMATION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class PrismInformation : public NetworkInterface {
public:
    unsigned int typeId = 0;
    unsigned int state = 1;
    unsigned int nextVulnerabilityDate = 0;
    unsigned int placementDate = 0;
    unsigned int rewardTokenCount = 0;
    unsigned int protocolId = 1525;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_PrismInformation(ICustomDataInput &input);

    void _typeIdFunc(ICustomDataInput &input);

    void _stateFunc(ICustomDataInput &input);

    void _nextVulnerabilityDateFunc(ICustomDataInput &input);

    void _placementDateFunc(ICustomDataInput &input);

    void _rewardTokenCountFunc(ICustomDataInput &input);
};

#endif