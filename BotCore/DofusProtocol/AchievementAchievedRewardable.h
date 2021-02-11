#ifndef ACHIEVEMENTACHIEVEDREWARDABLE
#define ACHIEVEMENTACHIEVEDREWARDABLE

#include "../IO/ICustomDataInput.h"
#include "AchievementAchieved.h"
#include "Achievement.h"

class AchievementAchievedRewardable : public AchievementAchieved {
public:
    unsigned int finishedlevel = 0;
    unsigned int protocolId = 5008;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementAchievedRewardable(ICustomDataInput &input);

    void _finishedlevelFunc(ICustomDataInput &input);
};

#endif