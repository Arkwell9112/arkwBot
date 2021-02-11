#ifndef JOBEXPERIENCE
#define JOBEXPERIENCE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"

class JobExperience : public NetworkInterface {
public:
    unsigned int jobId = 0;
    unsigned int jobLevel = 0;
    double jobXP = 0;
    double jobXpLevelFloor = 0;
    double jobXpNextLevelFloor = 0;
    unsigned int protocolId = 9427;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobExperience(ICustomDataInput &input);

    void _jobIdFunc(ICustomDataInput &input);

    void _jobLevelFunc(ICustomDataInput &input);

    void _jobXPFunc(ICustomDataInput &input);

    void _jobXpLevelFloorFunc(ICustomDataInput &input);

    void _jobXpNextLevelFloorFunc(ICustomDataInput &input);
};

#endif