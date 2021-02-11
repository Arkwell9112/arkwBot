#ifndef EXCHANGESTARTOKJOBINDEXMESSAGE
#define EXCHANGESTARTOKJOBINDEXMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class ExchangeStartOkJobIndexMessage : public NetworkInterface {
public:
    std::vector<unsigned int> jobs;
    unsigned int protocolId = 9678;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_ExchangeStartOkJobIndexMessage(ICustomDataInput &input);

    void _jobsFunc(ICustomDataInput &input);
};

#endif