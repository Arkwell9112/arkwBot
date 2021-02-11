#ifndef JOBCRAFTERDIRECTORYSETTINGS
#define JOBCRAFTERDIRECTORYSETTINGS

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class JobCrafterDirectorySettings : public NetworkInterface {
public:
    unsigned int jobId = 0;
    unsigned int minLevel = 0;
    bool free = false;
    unsigned int protocolId = 3479;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectorySettings(ICustomDataInput &input);

    void _jobIdFunc(ICustomDataInput &input);

    void _minLevelFunc(ICustomDataInput &input);

    void _freeFunc(ICustomDataInput &input);
};

#endif