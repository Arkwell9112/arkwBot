#ifndef JOBDESCRIPTIONMESSAGE
#define JOBDESCRIPTIONMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "JobDescription.h"

class JobDescriptionMessage : public NetworkInterface {
public:
    std::vector<JobDescription> jobsDescription;
    unsigned int protocolId = 8854;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobDescriptionMessage(ICustomDataInput &input);

    void _jobsDescriptionFunc(ICustomDataInput &input);
};

#endif