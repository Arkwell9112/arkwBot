#ifndef JOBCRAFTERDIRECTORYENTRYJOBINFO
#define JOBCRAFTERDIRECTORYENTRYJOBINFO

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class JobCrafterDirectoryEntryJobInfo : public NetworkInterface {
public:
    unsigned int jobId = 0;
    unsigned int jobLevel = 0;
    bool free = false;
    unsigned int minLevel = 0;
    unsigned int protocolId = 7129;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryEntryJobInfo(ICustomDataInput &input);

    void _jobIdFunc(ICustomDataInput &input);

    void _jobLevelFunc(ICustomDataInput &input);

    void _freeFunc(ICustomDataInput &input);

    void _minLevelFunc(ICustomDataInput &input);
};

#endif