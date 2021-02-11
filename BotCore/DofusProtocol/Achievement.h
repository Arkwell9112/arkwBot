#ifndef ACHIEVEMENT
#define ACHIEVEMENT

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "AchievementStartedObjective.h"
#include "AchievementObjective.h"

class Achievement : public NetworkInterface {
public:
    unsigned int id = 0;
    std::vector<AchievementObjective> finishedObjective;
    std::vector<AchievementStartedObjective> startedObjectives;
    unsigned int protocolId = 9185;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_Achievement(ICustomDataInput &input);

    void _idFunc(ICustomDataInput &input);

    void _finishedObjectiveFunc(ICustomDataInput &input);

    void _startedObjectivesFunc(ICustomDataInput &input);
};

#endif