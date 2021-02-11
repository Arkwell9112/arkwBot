#ifndef BASICLATENCYSTATSMESSAGE
#define BASICLATENCYSTATSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicLatencyStatsMessage : public NetworkInterface {
public:
    unsigned int latency = 0;
    unsigned int sampleCount = 0;
    unsigned int max = 0;
    unsigned int protocolId = 7674;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicLatencyStatsMessage(ICustomDataInput &input);

    void _latencyFunc(ICustomDataInput &input);

    void _sampleCountFunc(ICustomDataInput &input);

    void _maxFunc(ICustomDataInput &input);
};

#endif