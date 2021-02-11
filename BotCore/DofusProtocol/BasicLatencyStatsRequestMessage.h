#ifndef BASICLATENCYSTATSREQUESTMESSAGE
#define BASICLATENCYSTATSREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class BasicLatencyStatsRequestMessage : public NetworkInterface {
public:
    unsigned int protocolId = 9686;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_BasicLatencyStatsRequestMessage(ICustomDataInput &input);
};

#endif