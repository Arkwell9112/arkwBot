#ifndef JOBEXPERIENCEMULTIUPDATEMESSAGE
#define JOBEXPERIENCEMULTIUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "JobExperience.h"

class JobExperienceMultiUpdateMessage : public NetworkInterface {
public:
    std::vector<JobExperience> experiencesUpdate;
    unsigned int protocolId = 2837;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobExperienceMultiUpdateMessage(ICustomDataInput &input);

    void _experiencesUpdateFunc(ICustomDataInput &input);
};

#endif