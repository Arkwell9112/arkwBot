#ifndef JOBCRAFTERDIRECTORYREMOVEMESSAGE
#define JOBCRAFTERDIRECTORYREMOVEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class JobCrafterDirectoryRemoveMessage : public NetworkInterface {
public:
    unsigned int jobId = 0;
    double playerId = 0;
    unsigned int protocolId = 5823;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryRemoveMessage(ICustomDataInput &input);

    void _jobIdFunc(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif