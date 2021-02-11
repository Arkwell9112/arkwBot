#ifndef JOBLEVELUPMESSAGE
#define JOBLEVELUPMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "JobDescription.h"

class JobLevelUpMessage : public NetworkInterface {
public:
    unsigned int newLevel = 0;
    JobDescription jobsDescription;
    unsigned int protocolId = 7905;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobLevelUpMessage(ICustomDataInput &input);

    void _newLevelFunc(ICustomDataInput &input);
};

#endif