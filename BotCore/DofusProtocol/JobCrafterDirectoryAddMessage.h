#ifndef JOBCRAFTERDIRECTORYADDMESSAGE
#define JOBCRAFTERDIRECTORYADDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "JobCrafterDirectoryListEntry.h"

class JobCrafterDirectoryAddMessage : public NetworkInterface {
public:
    JobCrafterDirectoryListEntry listEntry;
    unsigned int protocolId = 9851;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryAddMessage(ICustomDataInput &input);
};

#endif