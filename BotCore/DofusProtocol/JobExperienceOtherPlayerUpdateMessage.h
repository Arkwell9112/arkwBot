#ifndef JOBEXPERIENCEOTHERPLAYERUPDATEMESSAGE
#define JOBEXPERIENCEOTHERPLAYERUPDATEMESSAGE

#include "../IO/ICustomDataInput.h"
#include "JobExperience.h"
#include "JobExperienceUpdateMessage.h"

class JobExperienceOtherPlayerUpdateMessage : public JobExperienceUpdateMessage {
public:
    double playerId = 0;
    unsigned int protocolId = 187;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobExperienceOtherPlayerUpdateMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);
};

#endif