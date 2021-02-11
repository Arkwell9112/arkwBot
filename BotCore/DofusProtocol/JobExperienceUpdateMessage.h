#ifndef JOBEXPERIENCEUPDATEMESSAGE
#define JOBEXPERIENCEUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "JobExperience.h"

class JobExperienceUpdateMessage : public NetworkInterface {
public:
    JobExperience experiencesUpdate;
    unsigned int protocolId = 1650;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobExperienceUpdateMessage(ICustomDataInput &input);
};

#endif