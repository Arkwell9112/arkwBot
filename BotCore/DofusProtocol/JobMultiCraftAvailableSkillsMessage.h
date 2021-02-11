#ifndef JOBMULTICRAFTAVAILABLESKILLSMESSAGE
#define JOBMULTICRAFTAVAILABLESKILLSMESSAGE

#include "../IO/ICustomDataInput.h"
#include <vector>
#include "JobAllowMultiCraftRequestMessage.h"

class JobMultiCraftAvailableSkillsMessage : public JobAllowMultiCraftRequestMessage {
public:
    double playerId = 0;
    std::vector<unsigned int> skills;
    unsigned int protocolId = 619;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_JobMultiCraftAvailableSkillsMessage(ICustomDataInput &input);

    void _playerIdFunc(ICustomDataInput &input);

    void _skillsFunc(ICustomDataInput &input);
};

#endif