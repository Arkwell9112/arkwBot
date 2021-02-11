#ifndef JOBBOOKSUBSCRIBEREQUESTMESSAGE
#define JOBBOOKSUBSCRIBEREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>

class JobBookSubscribeRequestMessage : public NetworkInterface {
public:
    std::vector<unsigned int> jobIds;
    unsigned int protocolId = 4616;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobBookSubscribeRequestMessage(ICustomDataInput &input);

    void _jobIdsFunc(ICustomDataInput &input);
};

#endif