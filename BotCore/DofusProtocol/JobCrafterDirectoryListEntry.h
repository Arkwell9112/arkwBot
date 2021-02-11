#ifndef JOBCRAFTERDIRECTORYLISTENTRY
#define JOBCRAFTERDIRECTORYLISTENTRY

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "JobCrafterDirectoryEntryPlayerInfo.h"
#include "JobCrafterDirectoryEntryJobInfo.h"

class JobCrafterDirectoryListEntry : public NetworkInterface {
public:
    JobCrafterDirectoryEntryPlayerInfo playerInfo;
    JobCrafterDirectoryEntryJobInfo jobInfo;
    unsigned int protocolId = 2114;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryListEntry(ICustomDataInput &input);
};

#endif