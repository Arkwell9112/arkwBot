#ifndef JOBCRAFTERDIRECTORYLISTREQUESTMESSAGE
#define JOBCRAFTERDIRECTORYLISTREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class JobCrafterDirectoryListRequestMessage : public NetworkInterface {
public:
    unsigned int jobId = 0;
    unsigned int protocolId = 7337;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryListRequestMessage(ICustomDataInput &input);

    void _jobIdFunc(ICustomDataInput &input);
};

#endif