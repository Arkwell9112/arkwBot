#ifndef ACHIEVEMENTREWARDREQUESTMESSAGE
#define ACHIEVEMENTREWARDREQUESTMESSAGE

#include "../IO/ICustomDataInput.h"
#include "../NetworkInterface.h"
#include "Achievement.h"

class AchievementRewardRequestMessage : public NetworkInterface {
public:
    int achievementId = 0;
    unsigned int protocolId = 5295;

    void deserialize(ICustomDataInput &input);

    void deserializeAs_AchievementRewardRequestMessage(ICustomDataInput &input);

    void _achievementIdFunc(ICustomDataInput &input);
};

#endif