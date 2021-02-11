#ifndef JOBCRAFTERDIRECTORYENTRYMESSAGE
#define JOBCRAFTERDIRECTORYENTRYMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "JobCrafterDirectoryEntryPlayerInfo.h"
#include "JobCrafterDirectoryEntryJobInfo.h"
#include "EntityLook.h"

class JobCrafterDirectoryEntryMessage : public NetworkInterface {
public:
    JobCrafterDirectoryEntryPlayerInfo playerInfo;
    std::vector<JobCrafterDirectoryEntryJobInfo> jobInfoList;
    EntityLook playerLook;
    unsigned int protocolId = 6783;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryEntryMessage(ICustomDataInput &input);

    void _jobInfoListFunc(ICustomDataInput &input);
};

#endif