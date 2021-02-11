#ifndef ACHIEVEMENTLISTMESSAGE
#define ACHIEVEMENTLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "AchievementAchieved.h"
#include "Achievement.h"

class AchievementListMessage : public NetworkInterface {
public:
    std::vector<AchievementAchieved> finishedAchievements;
    unsigned int protocolId = 3096;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementListMessage(ICustomDataInput &input);

    void _finishedAchievementsFunc(ICustomDataInput &input);
};

#endif