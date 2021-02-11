#ifndef JOBCRAFTERDIRECTORYSETTINGSMESSAGE
#define JOBCRAFTERDIRECTORYSETTINGSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "JobCrafterDirectorySettings.h"

class JobCrafterDirectorySettingsMessage : public NetworkInterface {
public:
    std::vector<JobCrafterDirectorySettings> craftersSettings;
    unsigned int protocolId = 5322;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectorySettingsMessage(ICustomDataInput &input);

    void _craftersSettingsFunc(ICustomDataInput &input);
};

#endif