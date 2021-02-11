#ifndef JOBDESCRIPTION
#define JOBDESCRIPTION

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "SkillActionDescription.h"

class JobDescription : public NetworkInterface {
public:
    unsigned int jobId = 0;
    std::vector<SkillActionDescription> skills;
    unsigned int protocolId = 8519;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobDescription(ICustomDataInput &input);

    void _jobIdFunc(ICustomDataInput &input);

    void _skillsFunc(ICustomDataInput &input);
};

#endif