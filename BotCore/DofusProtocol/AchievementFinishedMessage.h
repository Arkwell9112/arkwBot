#ifndef ACHIEVEMENTFINISHEDMESSAGE
#define ACHIEVEMENTFINISHEDMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "AchievementAchievedRewardable.h"
#include "AchievementAchieved.h"
#include "Achievement.h"

class AchievementFinishedMessage : public NetworkInterface {
public:
    AchievementAchievedRewardable achievement;
    unsigned int protocolId = 520;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementFinishedMessage(ICustomDataInput &input);
};

#endif