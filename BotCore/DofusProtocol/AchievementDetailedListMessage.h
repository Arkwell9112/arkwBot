#ifndef ACHIEVEMENTDETAILEDLISTMESSAGE
#define ACHIEVEMENTDETAILEDLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Achievement.h"

class AchievementDetailedListMessage : public NetworkInterface {
public:
    std::vector<Achievement> startedAchievements;
    std::vector<Achievement> finishedAchievements;
    unsigned int protocolId = 8753;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementDetailedListMessage(ICustomDataInput &input);

    void _startedAchievementsFunc(ICustomDataInput &input);

    void _finishedAchievementsFunc(ICustomDataInput &input);
};

#endif