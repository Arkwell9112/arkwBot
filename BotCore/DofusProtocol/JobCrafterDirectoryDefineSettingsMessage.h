#ifndef JOBCRAFTERDIRECTORYDEFINESETTINGSMESSAGE
#define JOBCRAFTERDIRECTORYDEFINESETTINGSMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "JobCrafterDirectorySettings.h"

class JobCrafterDirectoryDefineSettingsMessage : public NetworkInterface {
public:
    JobCrafterDirectorySettings settings;
    unsigned int protocolId = 356;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryDefineSettingsMessage(ICustomDataInput &input);
};

#endif