#ifndef JOBCRAFTERDIRECTORYLISTMESSAGE
#define JOBCRAFTERDIRECTORYLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "JobCrafterDirectoryListEntry.h"

class JobCrafterDirectoryListMessage : public NetworkInterface {
public:
    std::vector<JobCrafterDirectoryListEntry> listEntries;
    unsigned int protocolId = 1664;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobCrafterDirectoryListMessage(ICustomDataInput &input);

    void _listEntriesFunc(ICustomDataInput &input);
};

#endif