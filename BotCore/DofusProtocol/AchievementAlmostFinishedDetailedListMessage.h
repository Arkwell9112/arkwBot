#ifndef ACHIEVEMENTALMOSTFINISHEDDETAILEDLISTMESSAGE
#define ACHIEVEMENTALMOSTFINISHEDDETAILEDLISTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include <vector>
#include "Achievement.h"

class AchievementAlmostFinishedDetailedListMessage : public NetworkInterface {
public:
    std::vector<Achievement> almostFinishedAchievements;
    unsigned int protocolId = 8547;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementAlmostFinishedDetailedListMessage(ICustomDataInput &input);

    void _almostFinishedAchievementsFunc(ICustomDataInput &input);
};

#endif