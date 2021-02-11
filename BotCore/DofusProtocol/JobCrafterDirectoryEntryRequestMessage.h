#ifndef JOBCRAFTERDIRECTORYENTRYREQUESTMESSAGE
#define JOBCRAFTERDIRECTORYENTRYREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class JobCrafterDirectoryEntryRequestMessage : public NetworkInterface {
public:
    double playerId = 0;
    unsigned int protocolId = 6386;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryEntryRequestMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif